#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    int w[n]; rep(i, n) cin >> w[i];

    // 冗長
    // 部分和を総和から引いて絶対値を比較すればO(n)
    int sum = 0;
    int ans = 0;
    rep(i, n - 1) ans += w[i];
    rep(i, n){
        sum += w[i];
        int tmp = 0;
        REP(j, i + 1, n){
            tmp += w[j];
        }
        ans = min(ans, abs(sum - tmp));
    }
    OP(ans);
}
