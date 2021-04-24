#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  string s; cin >> s;

  int q; cin >> q;
  bool flag = false;
  for (int i = 0; i < q; i++) {
    int t, a, b; cin >> t >> a >> b;
    if(t == 1){
      if(flag){
        if(a <= n && b <= n){
          a = a + n - 1;
          b = b + n - 1;
        }else if(n < a && n < b){
          a = a - n - 1;
          b = b - n - 1;
        }else{
          a = a + n - 1;
          b = b - n - 1;
        }
        char ta = s[a];
        char tb = s[b];
        s[a] = tb;
        s[b] = ta;
      }else{
        char ta = s[a - 1];
        char tb = s[b - 1];
        s[a - 1] = tb;
        s[b - 1] = ta;
      }
    }else{
      flag = !flag;
    }
  }

  string t = s + s;
  if(flag) cout << t.substr(n, 2 * n) << endl;
  else cout << s << endl;

  return 0;
}
