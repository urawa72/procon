#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

const ll limit = 100010;
using edge = struct { ll to; ll cost; };
V<edge> G[limit];
V<ll> dis(limit);

// dfsでkから各頂点の距離を前計算しておく
void dfs(ll v, ll p, ll d){
    dis[v] = d;
    for(auto g : G[v]){
        // 以前頂点はスルー
        if(g.to == p) continue;
        dfs(g.to, v, d + g.cost);
    }
}

int main() {
    ll n; cin >> n;
    for(int i = 0; i < n - 1; i++){
        ll a, b, c; cin >> a >> b >> c;
        a--, b--;
        G[a].push_back({b, c});;
        G[b].push_back({a, c});
    }

    ll q, k; cin >> q >> k;
    k--;

    // 開始頂点、1つ前の頂点、距離
    dfs(k, -1, 0);

    for(int i = 0; i < q; i++){
        ll x, y; cin >> x >> y;
        x--, y--;
        cout << dis[x] + dis[y] << endl;
    }
}
