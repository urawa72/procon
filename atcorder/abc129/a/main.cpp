#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int p, q, r; cin >> p >> q >> r;

  cout << p + q + r - max({p, q, r}) << endl;

  return 0;
}
