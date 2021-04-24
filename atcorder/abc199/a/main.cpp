#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int a, b, c; cin >> a >> b >> c;

  if(a * a + b * b < c * c) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
