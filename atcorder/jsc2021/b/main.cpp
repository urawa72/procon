#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n, m; cin >> n >> m;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    mp[a]++;
  }
  for (int i = 0; i < m; i++) {
    int b; cin >> b;
    mp[b]++;
  }

  V<int> ans;
  for(auto p : mp){
    if(p.second != 1) continue;
    ans.push_back(p.first);
  }

  for (int i = 0; i < ans.size(); i++) {
    if(i != ans.size() -1 ) cout << ans[i] << ' ';
    else cout << ans[i] << endl;
  }

  return 0;
}
