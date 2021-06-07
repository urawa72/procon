#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

V<V<int> > g;
vector<bool> seen;
int ans = 0;
void dfs(const V<V<int>> &g, int v){
  seen[v] = true;
  for(auto next_v : g[v]){
    if(seen[next_v]) continue;
    ans++;
    dfs(g, next_v);
  }
}

int main() {
  int n, m; cin >> n >> m;
  g.resize(n + 1);
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    g[a].push_back(b);
  }

  seen.resize(n + 1, false);
  for (int i = 1; i <= n; i++) {
    ans++;
    dfs(g, i);
    for (int i = 0; i <= n; i++) {
      seen[i] = false;
    }
  }

  cout << ans << endl;

  return 0;
}
