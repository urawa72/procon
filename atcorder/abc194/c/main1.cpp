#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    V<ll> b(n + 1);
    for(int i = 1; i < n; i++){
        b[i + 1] = a[i] * a[i] + b[i];
    }
    V<ll> c(n + 1);
    for(int i = 1; i < n; i++){
        c[i + 1] = a[i] * 2 + c[i];
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += (n - i - 1) * a[i] * a[i];
        ans -= a[i] * (c[n] - c[i + 1]);
        ans += b[n] - b[i + 1];
    }
    cout << ans << endl;

    return 0;
}
