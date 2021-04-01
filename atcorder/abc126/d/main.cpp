#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> c(n + 1, 0);
    for(int i = 0; i < n - 1; i++){
        int u, v, w; cin >> u >> v >> w;
        if(w % 2 == 0) c[u] = 1, c[v] = 1;
    }
    for(int i = 1; i <= n; i++){
        cout << c[i] << endl;
    }


    return 0;
}
