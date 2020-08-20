#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    ll ans = 1LL << 60;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll sum = 0;
            ll s = a[i];
            ll g = b[j];
            for(int k = 0; k < n; k++){
                sum += abs(s - a[k]) + abs(a[k] - b[k]) + abs(b[k] - g);
            }
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;

    return 0;
}
