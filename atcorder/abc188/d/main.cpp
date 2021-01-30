#include <bits/stdc++.h>
#include <tuple>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n, C; cin >> n >> C;

    V<P<ll, ll> > v;
    for(ll i = 0; i < n; i++){
        ll a, b, c; cin >> a >> b >> c;
        v.emplace_back(a - 1, c);
        v.emplace_back(b, -c);
    }

    sort(ALL(v));

    ll ans = 0, f = 0, t = 0;
    for(auto p : v) {
        ll x = p.first;
        ll y = p.second;
        if(x != t){
            ans += min(C, f) * (x - t);
            t = x;
        }
        f += y;
    }

    cout << ans << endl;
    return 0;
}
