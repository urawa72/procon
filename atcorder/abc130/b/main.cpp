#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n,x; cin >> n >> x;
  V<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }

  int ans = 1, d = 0;
  for (int i = 0; i < n; i++) {
    d += l[i];
    if(d <= x) ans++;
  }
  cout << ans << endl;

  return 0;
}
