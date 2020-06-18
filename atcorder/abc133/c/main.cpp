#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    ll l, r; cin >> l >> r;

    // 最低2019*2の二周分しておけばmodを全部試せる
    r = min(r, l + 4039);
    ll ans = 2018;
    for(ll i = l; i <= r; i++){
        for(ll j = i + 1; j <= r; j++){
            ans = min(ans, (i * j) % 2019);
        }
    }
    cout << ans << endl;

    return 0;
}
