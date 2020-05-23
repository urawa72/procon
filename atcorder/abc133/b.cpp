#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, d; cin >> n >> d;
    vector<vector<double> > vec(n, vector<double>(d));
    rep(i, n){
        rep(j, d){
            cin >> vec[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            double tmp = 0.0;
            for(int k = 0; k < d; k++){
                tmp += pow(vec[i][k] - vec[j][k], 2.0);
            }
            // 整数判定
            if(floor(sqrt(tmp)) == sqrt(tmp)) cnt++;
            // tmp以下の整数で二乗してtmpになる整数をloopで探すことも可能
        }
    }
    OP(cnt);
}
