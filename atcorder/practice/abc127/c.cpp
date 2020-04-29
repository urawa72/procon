#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;

    int maxl = 1;
    int minr = 100000;
    rep(i, m){
        int l, r; cin >> l >> r;
        maxl = max(maxl, l);
        minr = min(minr, r);
    }

    // minr - maxlがマイナスの時は0
    int ans = 0;
    if(maxl <= minr){
        ans = minr - maxl + 1;
        OP(ans);
    }else{
        OP(ans);
    }
}
