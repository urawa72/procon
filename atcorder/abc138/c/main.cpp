#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<double> v(n);
  for(auto &nv : v) cin >> nv;

  sort(ALL(v));
  double ans = v[0];
  for (int i = 1; i < n; i++) {
    ans = (ans + v[i]) / 2;
  }

  printf("%.10f\n", ans);

  return 0;
}
