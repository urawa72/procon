#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;


int main() {
    int n, m, l; cin >> n >> m >> l;
    int p, q, r; cin >> p >> q >> r;

    int ans = (n / p) * (m / q) * (l / r);
    ans = max(((n / r) * (m / q) * (l / p)), ans);
    ans = max(((n / p) * (m / r) * (l / q)), ans);
    ans = max(((n / q) * (m / p) * (l / r)), ans);
    ans = max(((n / r) * (m / p) * (l / q)), ans);
    ans = max(((n / q) * (m / r) * (l / p)), ans);
    cout << ans << endl;

    return 0;
}
