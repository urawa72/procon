#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m, q; cin >> n >> m >> q;
    V<V<int> > g(n);
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    V<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];

    for(int i = 0; i < q; i++){
        int x, y; cin >> x >> y;
        y--;
        cout << c[y] << endl;
        if(x == 1){
            for(auto next : g[y]) c[next] = c[y];
        }else{
            int z; cin >> z;
            c[y] = z;
        }
    }


    return 0;
}
