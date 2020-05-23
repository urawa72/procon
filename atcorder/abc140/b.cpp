#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    int a[n + 1]; REP2(i, 1, n) cin >> a[i];
    int b[n + 1]; REP2(i, 1, n) cin >> b[i];
    int c[n]; REP2(i, 1, n - 1) cin >> c[i];

    int ans = 0;
    REP2(i, 1, n){
        ans += b[a[i]];
        if(a[i] == a[i + 1] - 1){
            ans += c[a[i]];
        }
    }
    OP(ans);
}
