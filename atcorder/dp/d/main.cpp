#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  ll N, W;
  cin >> N >> W;
  V<ll> w(N), v(N);
  for (int i = 0; i < N; i++) {
    cin >> w[i] >> v[i];
  }

  // 貰うDP
  V<V<ll>> dp(N + 1, V<ll>(W + 1, 0));
  for (int i = 0; i <= W; i++) {
    if(w[0] <= i) dp[0][i] = v[0];
  }
  for (int i = 1; i < N; i++) {
    for (int j = 0; j <= W; j++) {
      if(w[i] <= j){
        dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
      }else{
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[N - 1][W] << endl;

  return 0;
}
