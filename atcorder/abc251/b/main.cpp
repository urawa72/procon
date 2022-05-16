#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main() {
    int n, w;
    cin >> n >> w;
    V<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll, int> m;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= w) {
            m[a[i]] += 1;
            if (m[a[i]] == 1) {
                ans += 1;
            }
        }
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] <= w) {
                m[a[i] + a[j]] += 1;
                if (m[a[i] + a[j]] == 1) {
                    ans += 1;
                }
            }
            for (int k = j + 1; k < n; k++) {
                if (a[i] + a[j] + a[k] <= w) {
                    m[a[i] + a[j] + a[k]] += 1;
                    if (m[a[i] + a[j] + a[k]] == 1) {
                        ans += 1;
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
