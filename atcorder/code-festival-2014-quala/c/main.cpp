#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    ll a, b; cin >> a >> b;

    // 全探索でも間に合う
    // while(a % 4 != 0) a++;
    // ll ans = 0;
    // for(ll i = a; i <= b; i+=4){
    //     if(i % 100 == 0 && i % 400 != 0) continue;
    //     ans++;
    // }
    // cout << ans << endl;

    // 冗長
    // if(a % 4 != 0) {
    //     a += (4 - a % 4);
    //     if(a % 100 == 0 && a % 400 != 0){
    //         a += 4;
    //     }
    // }
    // if(b < a){
    //     cout << 0 << endl;
    //     return 0;
    // }else {
    //     ll y = b / 100 - (a - 1) / 100;
    //     ll z = b / 400 - (a - 1) / 400;
    //     cout << (b - a + 4) / 4 - (y - z) << endl;
    // }

    ll ans = 0;
    ans += b / 4 - (a - 1) / 4;
    ans -= b / 100 - (a - 1) / 100;
    ans += b / 400 - (a - 1) / 400;
    cout << ans << endl;

    return 0;
}
