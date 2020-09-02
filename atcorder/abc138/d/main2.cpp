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

V<V<ll> > g;
V<ll> ans;

void dfs(ll v, ll p = -1){
    for(auto next_v : g[v]){
        // 親だったらスルー
        if(p == next_v) continue;
        ans[next_v] += ans[v];
        dfs(next_v, v);
    }
}

int main() {
    int n, q; cin >> n >> q;
    g.resize(n);
    for(int i = 0; i < n - 1; i++){
        ll a, b; cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    // 予め親の得点を記録しておく
    ans.resize(n);
    for(int i = 0; i < q; i++){
        ll p, x; cin >> p >> x;
        p--;
        ans[p] += x;
    }

    // 親から子に点を渡すdfs
    dfs(0);

    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }

    return 0;
}
