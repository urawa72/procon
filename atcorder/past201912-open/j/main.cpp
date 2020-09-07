#include <bits/stdc++.h>
#include <climits>
#include <cstdint>
#include <functional>
#include <queue>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

V<P<int, int> > dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int h, w;
using T = tuple<ll, int, int>;

// ダイクストラ法
void djikstra(V<V<ll> > &visit, V<V<ll> > &cost, int sy, int sx){
    priority_queue<T, V<T>, greater<T>> que;
    que.emplace(cost[sy][sx], sy, sx);
    visit[sy][sx] = cost[sy][sx];
    while(!que.empty()){
        ll sum = 0;
        int y, x;
        tie(sum, y, x) = que.top();
        que.pop();
        for(auto &d : dirs) {
            int ny = y + d.first;
            int nx = x + d.second;
            if(ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
            int nsum = sum + cost[ny][nx];
            if(visit[ny][nx] <= nsum) continue;
            visit[ny][nx] = nsum;
            que.emplace(nsum, ny, nx);
        }
    }
}

int main() {
    cin >> h >> w;
    V<V<ll> > a(h, V<ll>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++) cin >> a[i][j];
    }

    ll ans = INT64_MAX;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            V<V<ll> > visit(h, V<ll>(w, INT64_MAX));
            djikstra(visit, a, i, j);
            ll sum = visit[h - 1][0] + visit[h - 1][w - 1] + visit[0][w - 1] - a[i][j] * 2;
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;


    return 0;
}
