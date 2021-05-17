#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> h(n);
  for(auto &nh : h) cin >> nh;

  for (int i = n - 1; 0 < i; i--) {
    if(h[i - 1] <= h[i]) continue;
    if(h[i - 1] - 1 <= h[i]){
      h[i - 1]--;
      continue;
    }
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;

  return 0;
}
