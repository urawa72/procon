#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int aa = 0, bb = 1e9;
  for (int i = 0; i < n; i++) {
    aa = max(a[i], aa);
    bb = min(b[i], bb);
  }

  if (0 <= bb - aa) cout << bb - aa + 1 << endl;
  else cout << 0 << endl;

  return 0;
}
