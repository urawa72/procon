#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n, k; cin >> n >> k;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  vector<int> dp(n + 10, INT_MAX);
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);
  for (int i = 2; i < n; i++) {
    for (int j = 1; j <= k; j++) {
      if(0 <= i - j){
        dp[i] = min(dp[i - j] + abs(h[i] - h[i - j]), dp[i]);
      }
    }
  }
  cout << dp[n - 1] << endl;

  return 0;
}
