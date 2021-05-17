#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<string> v(n);
  map<string, ll> mp;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    sort(ALL(s));
    mp[s]++;
  }

  ll ans = 0;
  for(auto p : mp){
    ans += (p.second * (p.second - 1) / 2);
  }

  cout << ans << endl;

  return 0;
}
