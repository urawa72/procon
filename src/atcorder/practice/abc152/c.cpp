#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    long p[n + 1]; REP(i, 1, n + 1) cin >> p[i];

    long ans = 0;
    long m = p[1];
    for(int i = 1; i <= n; i++){
        m = min(m, p[i]);
        if(p[i] <= m) ans++;
    }
    OP(ans);
}
