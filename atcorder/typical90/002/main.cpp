#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  int n;
  cin >> n;

  if (n & 1) {
    cout << '\n';
    return 0;
  }

  V<string> ans;
  for (int bit = 0; bit < (1 << n); bit++) {
    string t = "";
    for (int i = 0; i < n; i++) {
      if (bit & 1 << i)
        t += '(';
      else
        t += ')';
    }
    deque<char> q;
    bool ok = true;
    for (int i = 0; i < n; i++) {
      if (t[i] == '(')
        q.push_back(t[i]);
      else {
        if (!q.empty()) {
          auto c = q.back();
          if (c == '(') {
            q.pop_back();
          } else {
            ok = false;
            break;
          }
        }else{
          ok = false;
          break;
        }
      }
    }
    if (ok && q.empty()) {
      ans.push_back(t);
    }
  }

  sort(ALL(ans));
  for(auto a : ans) cout << a << endl;

  return 0;
}
