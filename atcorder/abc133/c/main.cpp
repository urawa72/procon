#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  ll l, r; cin >> l >> r;

  ll ans = LONG_LONG_MAX;
  for (ll i = l; i < min(l + 2019, r); i++) {
    for (ll j = l + 1; j <= min(l + 2019, r); j++) {
      ans = min((i * j) % 2019, ans);
    }
  }
  cout << ans << endl;

  return 0;
}
