#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  V<int> x(n + 1);
  for (int i = 0; i < n; i++) {
    x[i + 1] = x[i] + w[i];
  }

  int ans = 1e9;
  for (int i = 1; i <= n; i++) {
    int t = abs(x[i] - (x[n] - x[i]));
    ans = min(t, ans);
  }
  cout << ans << endl;

  return 0;
}
