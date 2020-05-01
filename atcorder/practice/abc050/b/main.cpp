#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n; cin >> n;
    vector<ll> t(n);
    for(ll i = 0; i < n; i++) cin >> t[i];
    ll m; cin >> m;
    vector<pair<ll, ll> > px(m);
    for(ll i = 0; i < m; i++){
        ll p, x; cin >> p >> x;
        px[i] = make_pair(p, x);
    }

    for(ll i = 0; i < m; i++){
        ll sum = px[i].second;
        for(ll j = 0; j < n; j++){
            if(px[i].first - 1 == j) continue;
            sum += t[j];
        }
        cout << sum << endl;
    }
}
