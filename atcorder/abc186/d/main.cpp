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
    sort(ALL(a));

    V<ll> v(n + 1);
    for(int i = 1; i < n; i++){
        v[i + 1] = a[i] + v[i];
    }

    ll ans = 0;
    for(int i = 0; i < n - 1; i++){
        ll s = a[i] * (n - i - 1);
        ll t = v[n] - v[i + 1];
        ans += (abs(s - t));
    }
    cout << ans << endl;


    return 0;
}
