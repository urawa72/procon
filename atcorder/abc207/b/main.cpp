#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll x = c * d - b;
  if(x <= 0){
    cout << -1 << endl;
    return 0;
  }

  cout << (a + x - 1) / x << endl;



  return 0;
}
