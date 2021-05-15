#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  string s; cin >> s;

  int ans = 0;
  for (int i = 0; i <= 9999; i++) {
    V<bool> f1(10);
    int x = i;
    for (int j = 0; j < 4; j++) {
      f1[x % 10] = true;
      x /= 10;
    }

    bool f2 = true;
    for (int j = 0; j < 10; j++) {
      if(s[j] == 'o' && !f1[j]) f2 = false;
      if(s[j] == 'x' && f1[j]) f2 = false;
    }
    ans += f2;
  }
  cout << ans << endl;

  return 0;
}
