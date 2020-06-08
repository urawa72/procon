#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll n, m; cin >> n >> m;
    ll x, y; cin >> x >> y;
    V<ll> a(n), b(m);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];

    ll t = a[0], ans = 0;
    while(1){
        if(a[n - 1] < t) break;
        t = *lower_bound(ALL(a), t);
        t += x;
        if(b[m - 1] < t) break;
        t = *lower_bound(ALL(b), t);
        t += y;
        ans++;
    }
    cout << ans << endl;

}
