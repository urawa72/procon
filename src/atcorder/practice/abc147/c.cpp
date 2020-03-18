#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int N;
vector<int> A;
vector<vector<int> > X;
vector<vector<int> > Y;
int ANS = 0;

void check(int xy[]){
    bool flag = true;
    rep(i, N){
        // 不親切の仮定なら発言の判定はしない
        if(xy[i] == 0) continue;
        rep(j, Y[i].size()){
            if(xy[X[i][j] - 1] != Y[i][j]){
                flag = false;
                break;
            }
        }
    }
    int ans = 0;
    if(flag){
        rep(i, N){
            if(xy[i] == 1) ans++;
        }
    }
    ANS = max(ANS, ans);
}

void rec(int n, int xy[]){
    if(n != N){
        xy[n] = 1;
        rec(n + 1, xy);
        xy[n] = 0;
        rec(n + 1, xy);
    }else{
        // 場合分け完了したらそれぞれチェック
        check(xy);
    }
}

int main() {
    cin >> N;
    A.resize(N);
    X.resize(N);
    Y.resize(N);
    rep(i, N){
        cin >> A[i];
        X[i].resize(A[i]);
        Y[i].resize(A[i]);
        rep(j, A[i]){
            cin >> X[i][j] >> Y[i][j];
        }
    }

    // 再帰関数で判定
    int xy[N];
    rec(0, xy);
    OP(ANS);
}
