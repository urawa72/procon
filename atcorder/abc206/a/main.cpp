#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;

  int m = floor(n * 1.08);
  if(m < 206) cout << "Yay!" << endl;
  else if(m == 206) cout << "so-so" << endl;
  else if(206 < m) cout << ":(" << endl;

  return 0;
}
