#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    V<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int x = min(n, m);
    if (n * n <= k) {
        cout << n << endl;
        return 0;
    }

    int ans = 1;
    for (int a = x; 0 < a; a--) {
        for (int i = 0; i <= n - a; i++) {
            for (int j = 0; j <= m - a; j++) {
                V<int> v(10);
                for (int b = i; b < i + a; b++) {
                    for (int c = j; c < j + a; c++) {
                        v[s[b][c] - '0']++;
                    }
                }
                sort(ALL(v), greater<int>());
                int sum = 0;
                for (int d = 1; d < (int)v.size(); d++) sum += v[d];
                if (sum <= k) ans = max(ans, a);
            }
        }
    }
    cout << ans << endl;

    return 0;
}
