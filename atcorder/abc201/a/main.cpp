#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  V<int> v(3);
  for (int i = 0; i < 3; i++) {
    cin >> v[i];
  }

  sort(ALL(v));

  if(v[2] - v[1] == v[1] - v[0]) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
