#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

int ans = 0;
using Graph = vector<vector<int>>;
set<int> se;

void dfs(const Graph &g, int v, int pv, int cnt){
    if(cnt == 2){
        se.insert(v);
        return;
    }
    for(auto next_v : g[v]){
        if(next_v == pv) continue;
        dfs(g, next_v, v, cnt + 1);
    }
}

int main() {
    int n, m; cin >> n >> m;
    Graph g(n);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        se.clear();
        dfs(g, i, i, 0);
        int cnt = 0;
        for(int j = 0; j < g[i].size(); j++){
            if(se.count(g[i][j])) cnt++;
        }
        cout << se.size() - cnt << endl;
        ans = 0;
    }
}
