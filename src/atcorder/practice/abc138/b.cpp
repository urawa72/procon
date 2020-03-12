#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    double a[n]; rep(i, n) cin >> a[i];

    double ans = 0.0;
    rep(i, n){
        ans += 1.0 / a[i];
    }
    ans = 1.0 / ans;
    cout << setprecision(16) << ans << endl;
}
