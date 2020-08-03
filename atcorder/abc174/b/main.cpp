#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    ll n, d; cin >> n >> d;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        if(x * x + y * y <= d * d) ans++;
    }
    cout << ans << endl;

    return 0;
}
