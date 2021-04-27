#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  int n, l;
  cin >> n >> l;
  V<int> v(n);
  for (int i = 0; i < n; i++) {
    v[i] = i + 1 + l - 1;
  }

  int sum = accumulate(ALL(v), 0);

  int ans = 0, c = 1e9;
  for (int i = 0; i < n; i++) {
    int tmp = sum - v[i];
    if (abs(sum - tmp) < c) {
      c = abs(sum - tmp);
      ans = tmp;
    }
  }
  cout << ans << endl;

  return 0;
}
