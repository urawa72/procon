#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> a(n), b(n), c(n);
  map<int, int> mpa;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    mpa[a]++;
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  map<int, int> mpc;
  for (int i = 0; i < n; i++) {
    int c; cin >> c;
    c--;
    mpc[c]++;
  }

  for (int i = 0; i < n; i++) {
  }

  ll ans = 0;
  for(auto p : mpc){
    if(0 < p.second){
      if(0 < mpa[b[p.first]]){
        ans += p.second * mpa[b[p.first]];
      }
    }
  }
  cout << ans << endl;



  return 0;
}
