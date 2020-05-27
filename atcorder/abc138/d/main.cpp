#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

V<V<int> > g;
V<int> ans;

// DFS デフォルト引数で親の初期値
void dfs(int v, int i = -1){
    for(auto next_v : g[v]){
        // 親だったらスルー
        if(next_v == i) continue;
        ans[next_v] += ans[v];
        dfs(next_v, v);
    }
}

int main() {
    int n, q; cin >> n >> q;

    // 無向グラフ作成
    g.resize(n);
    for(int i = 0; i < n - 1; i++){
        int a, b; cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    // 頂点の特典を記録
    ans.resize(n);
    for(int i = 0; i < q; i++){
        int p, x; cin >> p >> x;
        p--;
        ans[p] += x;
    }

    // 子に親の点を足すためにDFS
    dfs(0);

    for(int i = 0; i < n; i++){
        if(i != n - 1) cout << ans[i] << " ";
        else cout << ans[i] << endl;
    }
}
