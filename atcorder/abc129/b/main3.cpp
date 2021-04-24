#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    V<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    V<int> v(n + 1);
    for (int i = 0; i < n; i++) {
        v[i + 1] = w[i] + v[i];
    }

    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        int tmp = abs(v[i] - (v[n] - v[i]));
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}
