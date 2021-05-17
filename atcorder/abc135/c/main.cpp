#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<ll> a(n + 1), b(n);
  for(auto &na : a) cin >> na;
  for(auto &nb : b) cin >> nb;

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll cur = min(a[i], b[i]);
    ans += cur;
    a[i] -= cur;
    b[i] -= cur;

    ll next = min(a[i + 1], b[i]);
    ans += next;
    a[i + 1] -= next;
    b[i] -= next;
  }

  cout << ans << endl;

  return 0;
}
