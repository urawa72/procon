#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int a, b; cin >> a >> b;

  int ans = 0;
  for (int i = b; 1 <= i; i--) {
    int x = b / i;
    int y = (a - 1) / i;
    if(2 <= x - y){
      cout << i << endl;
      return 0;
    }
  }
  cout << 1 << endl;

  return 0;
}
