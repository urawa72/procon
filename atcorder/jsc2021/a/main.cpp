#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int x, y, z; cin >> x >> y >> z;
  int ans = y * z / x;
  if((y * z) % x == 0) ans--;
  cout << ans << endl;

  return 0;
}
