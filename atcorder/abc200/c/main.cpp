#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<ll> a(n), b(n);
  map<ll, ll> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i] % 200;
    mp[b[i]]++;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    mp[b[i]]--;
    if(mp[b[i]]){
      ans += mp[b[i]];
    }
  }
  cout << ans << endl;

  return 0;
}
