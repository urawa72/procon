#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n, s, t; cin >> n >> s >> t;
    ll w; cin >> w;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(s <= w && w <= t) ans++;
        ll a; cin >> a;
        w += a;
    }
    cout << ans << endl;
}
