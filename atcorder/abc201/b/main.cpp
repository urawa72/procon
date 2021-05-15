#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<P<int, string> > v(n);
  for (int i = 0; i < n; i++) {
    string s;
    int t;
    cin >> s >> t;
    v[i] = make_pair(t, s);
  }

  sort(ALL(v));

  cout << v[n - 2].second << endl;

  return 0;
}
