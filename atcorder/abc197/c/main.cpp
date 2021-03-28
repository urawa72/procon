#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    V<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = INT_MAX;
    for (int bit = 0; bit < 1 << (n - 1); bit++) {
        int x = 0;
        int o = 0;
        for (int i = 0; i <= n; i++) {
            if (i < n) o |= a[i];
            if (bit & 1 << i || i == n) x ^= o, o = 0;
        }
        ans = min(ans, x);
    }
    cout << ans << endl;

    return 0;
}
