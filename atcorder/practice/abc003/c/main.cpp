#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, k; cin >> n >> k;
    V<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));

    double ans = 0;
    int p = n - k;
    for(int i = 0; i < k; i++){
        ans = (ans + v[p]) / 2;
        p++;
    }
    cout << setprecision(12) << ans << endl;
}
