#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  string s; cin >> s;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if(s[i - 1] == s[i]) continue;
    else ans++;
  }
  cout << ans + 1 << endl;

  return 0;
}
