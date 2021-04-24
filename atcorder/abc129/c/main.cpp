#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

const int MOD = 1e9 + 7;

int main() {
  int n, m; cin >> n >> m;
  V<int> a(m);
  map<int, int> mp;
  for (int i = 0; i < m; i++) {
    int a; cin >> a;
    mp[a]++;
  }

  V<int> dp(n + 2, 0);

  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    // 1段上と2段上
    if(mp[i + 1] == 0) dp[i + 1] += dp[i] % MOD;
    if(mp[i + 2] == 0) dp[i + 2] += dp[i] % MOD;
  }
  cout << dp[n] % MOD<< endl;

  return 0;
}
