#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> a(n);
  for(auto &na : a) cin >> na;

  V<ll> x(n, 0);
  for (int i = 0; i < n; i++) {
    if(i % 2 == 0) x[0] += a[i];
    else x[0] -= a[i];
  }

  for (int i = 1; i < n; i++) {
    x[i] = 2 * a[i - 1] - x[i - 1];
  }

  for (int i = 0; i < n; i++) {
    if(i) cout << ' ';
    cout << x[i];
  }


  return 0;
}
