#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int N, W;
vector<int> a;

// 再帰関数 部分和作れるか
bool rec(int i, int w){
    // 終了チェック
    if(i == 0){
        // 総和をwにできたか
        if(w == 0) return true;
        else return false;
    }

    // 選ぶ場合
    if(w >= a[i - 1] && rec(i - 1, w - a[i - 1])) return true;
    // 選ばない場合
    if(rec(i - 1, w)) return true;
    // ダメだった
    return false;
}

int main() {
    N = 3;
    W = 10;
    a.resize(N);
    a = {2, 3, 8};

    if(rec(N, W)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
