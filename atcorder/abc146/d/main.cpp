#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30

// 辺のidも保持した構造体
struct Edge {
    int to, id;
};

// 隣接リスト
V<V<Edge> > g, id;
V<int> ans;

// 頂点vの周りの辺を塗る
// cは親の色
// pは親頂点
void dfs(int v, int c = -1, int p = -1){
    int k = 1;
    for(auto ng : g[v]){
        if(ng.to == p) continue;
        if(k == c) k++; // 親の色と同じならincrement
        ans[ng.id] = k; // 辺idに対して色番号をセット
        k++;
        dfs(ng.to, ans[ng.id], v);
    }
}

int main() {
    int n; cin >> n;
    g.resize(n);
    for(int i = 0; i < n - 1; i++){
        int a, b; cin >> a >> b;
        a--, b--;
        g[a].push_back((Edge){b, i});
        g[b].push_back((Edge){a, i});
    }

    ans.resize(n - 1);
    dfs(0);

    // 最大色数=次数
    int mx = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx, (int)g[i].size());
    }

    cout << mx << endl;
    for(int i = 0; i < n - 1; i++){
        cout << ans[i] << endl;
    }
    return 0;
}
