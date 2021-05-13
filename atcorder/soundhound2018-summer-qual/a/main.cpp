#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int a, b; cin >> a >> b;
  if(a + b == 15) cout << '+' << endl;
  else if(a * b == 15) cout << '*' << endl;
  else cout << 'x' << endl;

  return 0;
}
