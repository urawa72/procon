#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

struct UnionFind {
    vector<int> d;
    // n要素で初期化
    UnionFind(int n): d(n,-1) {}
    // 木の根を決める
    int root(int x) {
        if (d[x] < 0) return x;
        return d[x] = root(d[x]);
    }
    // xとy属する集合を併合
    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (d[x] > d[y]) swap(x,y);
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    // xとyが同じ集合に属するか否か
    bool same(int x, int y) { return root(x) == root(y); }
    // xの属する集合のサイズ
    int size(int x) { return -d[root(x)];}
};

int main() {
    int n, m; cin >> n >> m;

    UnionFind uf(n);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--, b--;
        uf.unite(a, b);
    }

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        if(!uf.same(i, i + 1)){
            uf.unite(i, i + 1);
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
