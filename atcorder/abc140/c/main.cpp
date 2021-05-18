#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> b(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> b[i];
  }

  ll ans = b[0];
  for (int i = 1; i < n - 1; i++) {
    ans += min(b[i - 1], b[i]);
  }

  ans += b[n - 2];
  cout << ans << endl;

  return 0;
}
