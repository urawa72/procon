#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  int n, d;
  cin >> n >> d;
  V<V<double>> v(n, V<double>(d));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < d; j++) {
      cin >> v[i][j];
    }
  }

  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      double tmp = 0;
      for (int k = 0; k < d; k++) {
        tmp += pow(v[j][k] - v[i][k], 2);
      }
      if ((int)sqrt(tmp) == ceil(sqrt(tmp))) {
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
