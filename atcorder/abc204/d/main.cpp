#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
template<class T> void chmax(T& a, T b) { if(a < b) a = b; }
template<class T> void chmin(T& a, T b) { if(a > b) a = b; }

int n, t[101];
int dp[101][102010];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < 101010; j++) {
      dp[i][j] = INT_MAX;
    }
  }

  dp[0][0] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 101000; j++) {
      if (dp[i][j] != INT_MAX) {
        chmin(dp[i + 1][j + t[i]], dp[i][j]);
        chmin(dp[i + 1][j], dp[i][j] + t[i]);
      }
    }
  }

  int ans = INT_MAX;
  for (int i = 0; i < 101000; i++) {
    chmin(ans, max(i, dp[n][i]));
  }
  cout << ans << endl;

  return 0;
}
