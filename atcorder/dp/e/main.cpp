#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}

int main() {
  int N, W;
  cin >> N >> W;
  V<int> w(N), v(N);
  for (int i = 0; i < N; i++) {
    cin >> w[i] >> v[i];
  }

  V<V<int>> dp(N + 10, V<int>(N * 1020, INT_MAX / 2));
  dp[0][0] = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= N * 1010; j++) {
      if(0 <= j - v[i]){
        chmin(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
      }
      chmin(dp[i + 1][j], dp[i][j]);
    }
  }

  int ans = 0;
  for (int i = 0; i <= N * 1010; i++) {
    if (dp[N][i] <= W) ans = i;
  }
  cout << ans << endl;

  return 0;
}
