#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  ll n, l, k;
  cin >> n >> l >> k;
  V<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  auto check = [&](ll x) -> bool {
    ll num = 0;
    ll pre = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] - pre >= x) {
        num++;
        pre = a[i];
      }
    }
    if (l - pre >= x) num++;
    return (num >= k + 1);
  };

  ll left = -1, right = l + 1;
  while (right - left > 1) {
    ll mid = (right + left) / 2;
    if (check(mid))
      left = mid;
    else
      right = mid;
  }

  cout << left << endl;

  return 0;
}
