#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  string s; cin >> s;
  int n = s.size();

  reverse(ALL(s));
  string ans = "";
  for (int i = 0; i < n; i++) {
    if(s[i] == '6') ans += '9';
    else if(s[i] == '9') ans += '6';
    else ans += s[i];
  }
  cout << ans << endl;

  return 0;
}
