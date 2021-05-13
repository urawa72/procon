#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  string s; cin >> s;
  int w; cin >> w;

  for (int i = 0; i < (int)s.size(); i+=w) {
    cout << s[i];
  }
  cout << '\n';

  return 0;
}
