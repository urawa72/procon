#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int a, b, c; cin >> a >> b >> c;
  V<int> v(3);
  v[0] = a;
  v[1] = b;
  v[2] = c;

  sort(ALL(v));
  cout << v[1] + v[2] << endl;

  return 0;
}
