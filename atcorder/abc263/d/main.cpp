#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 62;

int main() {
    ll n, l, r, sum = 0;
    cin >> n >> l >> r;
    V<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    V<ll> v1(n + 2);
    for (int i = 1; i <= n; i++) {
        v1[i] = min(v1[i - 1] + a[i], l * i);
    }

    V<ll> v2(n + 2);
    for (int i = n; 0 < i; i--) {
        v2[i] = min(v2[i + 1] + a[i], (n - i + 1) * r);
    }

    for (int i = 0; i <= n; i++) {
        sum = min(v1[i] + v2[i + 1], sum);
    }

    cout << sum << endl;

    return 0;
}
