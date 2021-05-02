#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  string s; cin >> s;
  int n = s.size();
  int ans = 0;
  for (int i = 0; i < n - 3; i++) {
    if(s.substr(i, 4) == "ZONe") ans++;
  }
  cout << ans << endl;

  return 0;
}
