#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    V<int> a(n), b(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    V<V<int> > dp(n + 1, V<int>(3, 0));
    dp[0][0] = dp[0][1] = dp[0][2] = 0;
    for(int i = 1; i <= n; i++){
        dp[i][0] = max(dp[i - 1][1] + a[i - 1], dp[i - 1][2] + a[i - 1]);
        dp[i][1] = max(dp[i - 1][0] + b[i - 1], dp[i - 1][2] + b[i - 1]);
        dp[i][2] = max(dp[i - 1][0] + c[i - 1], dp[i - 1][1] + c[i - 1]);
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}
