#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int dp[n + 10];
  memset(dp, 0, sizeof(dp));
  dp[0] = 0;
  dp[1] = abs(v[1] - v[0]);
  for (int i = 2; i < n; i++) {
    dp[i] =
        min(dp[i - 2] + abs(v[i] - v[i - 2]), dp[i - 1] + abs(v[i] - v[i - 1]));
  }

  cout << dp[n - 1] << endl;

  return 0;
}
