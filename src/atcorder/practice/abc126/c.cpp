#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;

    double dice = 1.0 / n;
    double ans = 0;
    REP2(i, 1, n){
        int point = i;
        int ex = 0;
        while(point < k){
            point *= 2;
            ex++;
        }
        ans += dice * pow(0.5, ex);
    }
    cout << setprecision(12) << ans << endl;
}
