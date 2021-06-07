#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if(10 < a){
      ans += a - 10;
    }
  }
  cout << ans << endl;

  return 0;
}
