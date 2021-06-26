#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  ll n;
  cin >> n;
  V<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(ALL(a));

  ll q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    ll b;
    cin >> b;
    auto ite = lower_bound(ALL(a), b);
    if (ite - a.begin() != 0) {
      cout << min(abs(*(ite - 1) - b), abs(*ite - b)) << endl;
    } else {
      cout << abs(*ite - b) << endl;
    }
  }

  return 0;
}
