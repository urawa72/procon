#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<P<int, int> > vp(n);
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    vp[i] = {b, a};
  }

  sort(ALL(vp));

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += vp[i].second;
    if(vp[i].first < sum){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
