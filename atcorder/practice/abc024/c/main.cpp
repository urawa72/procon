#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n, d, k; cin >> n >> d >> k;

    V<P<ll, ll> > v(d);
    for(int i = 0; i < d; i++){
        ll l, r; cin >> l >> r;
        v[i] = make_pair(l, r);
    }

    V<P<ll, ll> > w(k);
    for(int i = 0; i < k; i++){
        ll s, t; cin >> s >> t;
        w[i] = make_pair(s, t);
    }

    for(ll i = 0; i < k; i++){
        ll s = w[i].first, g = w[i].second;
        ll ans = INF;
        for(ll j = 0; j < d; j++){
            ll l = v[j].first, r = v[j].second;
            if(s < g){
                if(l <= s && s <= r && g <= r){
                    ans = min(ans, j + 1);
                }else if(l <= s && s <= r){
                    s = r;
                }
            }else{
                if(s <= r && l <= s && l <= g){
                    ans = min(ans, j + 1);
                }else if(l <= s && s <= r){
                    s = l;
                }
            }
        }
        cout << ans << endl;
    }

}
