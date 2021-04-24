#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  double r, x, y; cin >> r >> x >> y;

  double a = sqrt(x * x + y * y);
  int ans = ceil(a / r);
  if(ans == 1 && a != r) ans++;
  cout << ans << endl;

  return 0;
}
