#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  ll n; cin >> n;
  V<P<ll, ll> > v(n);
  V<double> l(n), r(n);

  for (int i = 0; i < n; i++) {
    ll t; cin >> t >> l[i] >> r[i];
    if(t == 2){
      r[i] -= 0.5;
    }
    if(t == 3){
      l[i] += 0.5;
    }
    if(t == 4){
      l[i] += 0.5;
      r[i] -= 0.5;
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      ans += (max(l[i], l[j]) <= min(r[i], r[j]));
    }
  }
  cout << ans << endl;


  return 0;
}
