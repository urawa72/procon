#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    V<V<ll>> a(h, V<ll>(w)), b(h, V<ll>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> b[i][j];
        }
    }

    ll ans = 0;
    for (int i = 0; i < h - 1; i++) {
        for (int j = 0; j < w - 1; j++) {
            ll d = b[i][j] - a[i][j];
            a[i][j] += d;
            a[i + 1][j] += d;
            a[i][j + 1] += d;
            a[i + 1][j + 1] += d;
            ans += abs(d);
        }
    }

    if (a == b) {
        cout << "Yes" << endl;
        cout << ans << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
