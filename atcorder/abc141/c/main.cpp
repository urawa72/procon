#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n, k, q; cin >> n >> k >> q;
  map<int, int> mp;
  V<int> v(n, k);
  for (int i = 0; i < q; i++) {
    int a; cin >> a;
    a--;
    v[a]++;
  }

  for (int i = 0; i < n; i++) {
    if(0 < v[i] - q) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
