#include <bits/stdc++.h>

#include <climits>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main() {
    int n;
    cin >> n;
    V<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll ans = INF;
    for (int i = 0; i < 10; i++) {
        map<ll, int> m;
        ll tmp = 0;
        for (int j = 0; j < n; j++) {
            ll t;
            for (int k = 0; k < 10; k++) {
                if (int(v[j][k] - '0') == i) {
                    t = k;
                    break;
                }
            }
            if (m[t]) {
                while (true) {
                    t += 10;
                    if (!m[t]) {
                        break;
                    }
                }
            }
            m[t] = 1;
        }
        for (auto p : m) {
            tmp = max(tmp, p.first);
        }
        ans = min(tmp, ans);
    }

    cout << ans << endl;

    return 0;
}
