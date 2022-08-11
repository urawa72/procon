#include <bits/stdc++.h>
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
    V<int> v(n);
    for (int i = 1; i < n; i++) {
        cin >> v[i];
    }
    int p = n - 1;
    int ans = 0;
    while (true) {
        p = v[p] - 1;
        ans++;
        if (p == 0) {
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}
