#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;

struct UnionFind {
    vector<int> d;
    UnionFind(int n): d(n,-1) {}
    int root(int x) {
        if (d[x] < 0) return x;
        return d[x] = root(d[x]);
    }
    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (d[x] > d[y]) swap(x,y);
            d[x] += d[y];
            d[y] = x;
            return true;
        }
    bool same(int x, int y) { return root(x) == root(y); }
    int size(int x) { return -d[root(x)];}
};

int deg[100005];
vector<int> to[100005];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    UnionFind uf(n);

    // 友達関係は辺の情報はいらない
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        --a; --b;
        deg[a]++;
        deg[b]++;
        uf.unite(a,b);
    }

    for(int i = 0; i < k; i++){
        int c, d; cin >> c >> d;
        --c; --d;
        to[c].push_back(d);
        to[d].push_back(c);
    }

    for(int i = 0; i < n; i++){
        // 連結成分数-自分自身-直接の友達数
        int ans = uf.size(i) - 1 - deg[i];
        for (int u : to[i]) {
            // 同じ連結成分内のブロック関係を引く
            if (uf.same(i,u)) --ans;
        }
        printf("%d%c", ans, i == n - 1 ? '\n' : ' ');
    }

    return 0;
}
