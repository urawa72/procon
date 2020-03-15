#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;
const int inf = 1000000000;

int main() {
    int n; cin >> n;
    int x[n];
    int m = 0;
    rep(i, n){
        cin >> x[i];
        m = max(m, x[i]);
    }

    int ans = inf;
    REP(i, 1, m + 1){
        int sum = 0;
        rep(j, n){
            sum += pow((x[j] - i), 2.0);
        }
        ans = min(ans, sum);
    }
    OP(ans);
}
