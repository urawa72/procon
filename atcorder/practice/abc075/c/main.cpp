#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

using Graph = vector<vector<int>>;
vector<bool> seen;
void dfs(const Graph &g, int v, P<int, int> &p){
    seen[v] = true;
    for(auto next_v : g[v]){
        if(seen[next_v]) continue;
        if(v == p.first && next_v == p.second) continue;
        if(v == p.second && next_v == p.first) continue;
        dfs(g, next_v, p);
    }
}

int main() {
    int n, m; cin >> n >> m;
    Graph g(n + 1);
    V<P<int, int> > p;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        p.push_back({a, b});
    }

    seen.resize(n);
    int cnt = 0;
    for(int i = 0; i < m; i++){
        dfs(g, 1, p[i]);
        for(int i = 1; i <= n; i++){
            if(!seen[i]){
                cnt++;
                break;
            }
        }
        for(int i = 1; i <= n; i++) seen[i] = false;
    }
    cout << cnt << endl;
}
