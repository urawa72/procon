#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  string n; cin >> n;

  for (int i = 0; i < 10; i++) {
    string t = n;
    reverse(ALL(t));
    if(n == t){
      cout << "Yes" << endl;
      return 0;
    }else{
      string s = "0" + n;
      n = s;
    }
  }
  cout << "No" << endl;
  return 0;
}
