#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  V<V<int>> dp(3, V<int>(n, 0));
  dp[0][0] = a[0];
  dp[1][0] = b[0];
  dp[2][0] = c[0];
  for (int i = 0; i < n; i++) {
    dp[0][i] = max(dp[1][i - 1] + b[i], dp[2][i - 1] + c[i]);
    dp[1][i] = max(dp[0][i - 1] + a[i], dp[2][i - 1] + c[i]);
    dp[2][i] = max(dp[0][i - 1] + a[i], dp[1][i - 1] + b[i]);
  }

  cout << max({dp[0][n - 1], dp[1][n - 1], dp[2][n - 1]}) << endl;

  return 0;
}
