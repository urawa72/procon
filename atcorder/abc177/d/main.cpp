#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

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

int main() {
    int n, m; cin >> n >> m;
    UnionFind uf(n);

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        --a; --b;
        uf.unite(a,b);
    }

    // 一番人数の多いグループの人数が答え
    // 人数分別グループをつくらなければいけない
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, uf.size(i));
    }
    cout << ans << endl;

    return 0;
}
