#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

struct UnionFind {
    vector<ll> d;
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
    V<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    UnionFind uf(n);
    for(int i = 0; i < m; i++){
        ll c, d; cin >> c >> d;
        --c, --d;
        uf.unite(c, d);
    }

    // 同じ連結成分は総和が0になるはず
    V<ll> ab(n);
    for(int i = 0; i < n; i++){
        ab[uf.root(i)] += a[i] - b[i];
    }

    for(int i = 0; i < n; i++){
        if(ab[i] != 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
