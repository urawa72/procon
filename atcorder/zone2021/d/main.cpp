#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  string s; cin >> s;
  string t; cin >> t;

  int n = s.size();
  bool f = true;
  int p = 0;
  for (int i = 0; i < n; i++) {
    if(s[i] == 'R'){
      f = !f;
    }else{
      if(f){
        int m = t.size();
        char tmp = t[m - 1];
        if(tmp == s[i]) t = t.substr(0, m - 1);
        else t += s[i];
      }else{
        int m = t.size();
        char tmp = t[0];
        if(tmp == s[i]) t = t.substr(1, m - 1);
        else t = s[i] + t;
      }
    }
  }

  if(!f){
    reverse(ALL(t));
  }
  cout << t << endl;

  return 0;
}
