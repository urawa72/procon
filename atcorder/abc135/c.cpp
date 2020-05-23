#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> va(n + 1);
    vector<int> vb(n);

    rep(i, n + 1) cin >> va[i];
    rep(i, n) cin >> vb[i];

    ll ans = 0;
    rep(i, n){
        // 小さい方を加算
        int x = min(va[i], vb[i]);
        ans += x;
        // vaの方が小さい時
        if(0 < vb[i] - x){
            // vbの余力で攻撃
            int y = min(va[i + 1], vb[i] - x);
            // 小さい方を加算
            ans += y;
            // 攻撃した分を引いておく
            va[i + 1] -= y;
        }
    }

    // 冗長
    // rep(i, n){
    //     int j = i;
    //     if(0 <= va[j] - vb[i]){
    //         ans += vb[j];
    //     }else{
    //         vb[i] -= va[j];
    //         ans += va[j];
    //         if(0 <= va[j + 1] - vb[i]){
    //             ans += vb[i];
    //             va[j + 1] -= vb[i];
    //         }else{
    //             ans += va[j + 1];
    //             va[j + 1] = 0;
    //         }
    //     }
    // }
    OP(ans);
}
