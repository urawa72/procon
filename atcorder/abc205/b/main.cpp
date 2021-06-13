#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<bool> v(n + 1);
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    v[a] = true;
  }

  for (int i = 1; i <= n; i++) {
    if(!v[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}
