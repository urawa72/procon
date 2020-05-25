#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, k; cin >> n >> k;

    int ans = 0;
    rep(i, n){
        int h; cin >> h;
        if(k <= h) ans++;
    }
    OP(ans);
}
