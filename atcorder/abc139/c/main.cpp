#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> v(n);
  for(auto &nv : v) cin >> nv;

  int ans = 0, cnt = 0;
  for (int i = 1; i < n; i++) {
    if(v[i - 1] >= v[i]){
      cnt++;
    }else{
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  ans = max(ans, cnt);
  cout << ans << endl;

  return 0;
}
