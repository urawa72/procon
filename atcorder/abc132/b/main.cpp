#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    int p[n]; rep(i, n) cin >> p[i];

    int ans = 0;
    rep(i, n){
        int i1 = i + 1;
        int i2 = i + 2;
        if(n <= i1 || n <= i2) break;
        if((p[i] < p[i1] && p[i1] < p[i2]) || (p[i2] < p[i1] && p[i1] < p[i])) ans++;
    }
    OP(ans);
}
