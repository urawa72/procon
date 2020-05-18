#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

using Graph = V<V<int>>;

int main() {
    int n, m; cin >> n >> m;
    Graph g(n + 1);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    V<int> parent(n + 1, -1);
    queue<int> que;

    parent[1] = 0;
    que.push(1);
    // 各頂点がどこからきたかparentに記録
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : g[v]){
            if(parent[nv] != -1) continue;
            parent[nv] = v;
            que.push(nv);
        }
    }

    for(int i = 2; i <= n; i++){
        if(parent[i] == -1){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    for(int i = 2; i <= n; i++){
        cout << parent[i] << endl;
    }

}
