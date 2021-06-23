#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  ll n; cin >> n;
  V<ll> a(n);
  map<ll, ll> mp;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }

  ll sum = (n * (n - 1)) / 2;
  for(auto p : mp){
    if(1 < p.second){
      ll m = p.second;
      ll tmp = (m * (m - 1)) / 2;
      sum -= tmp;
    }
  }
  cout << sum << endl;


  return 0;
}
