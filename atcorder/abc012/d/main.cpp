#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int n, m;
int main() {
    int n, m; cin >> n >> m;
    V<V<int> > dis(n, V<int>(n, IINF/2));
    for(int i = 0; i < m; i++){
        int a, b, t; cin >> a >> b >> t;
        a--, b--;
        dis[a][b] = dis[b][a] = t;
    }

    // ワーシャルフロイド
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }

    int ans = IINF;
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            tmp = max(tmp, dis[i][j]);
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}
