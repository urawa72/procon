#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  int n;
  cin >> n;
  V<int> a(n);
  for (auto &x : a) cin >> x;
  map<int, V<int>> mp;
  auto output = [](V<int> &w){
    cout << w.size();
    for(auto &x : w) cout << ' ' << x;
    cout << '\n';
  };

  int cnt = min(n, 8);
  for (int bit = 0; bit < (1 << cnt); bit++) {
    int sum = 0;
    V<int> v;
    for (int j = 0; j < cnt; j++) {
      if (bit & 1 << j) {
        v.push_back(j + 1);
        sum += a[j];
        sum %= 200;
      }
    }
    if (mp[sum].size() != 0) {
      cout << "Yes" << endl;
      output(mp[sum]);
      output(v);
      return 0;
    }else{
      mp[sum] = v;
    }
  }

  cout << "No" << endl;

  return 0;
}
