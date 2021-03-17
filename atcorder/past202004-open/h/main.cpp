#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

// see https://math.nakaken88.com/problem/atcoder-past-202004-h/
int main() {
    int n, m; cin >> n >> m;

    int gi, gj;
    V<V<int> > grid(n, V<int>(m, 0));
    V<V<int> > dp(n, V<int>(m, 1e9));
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < m; j++){
            if(s[j] == 'S'){
                dp[i][j] = 0;
            }else if(s[j] == 'G'){
                grid[i][j] = 10;
                gi = i;
                gj = j;
            }else{
                grid[i][j] = s[j] - '0';
            }
        }
    }

    // 最短距離を求めるDP
    for(int k = 1; k <= 10; k++){
        for(int i1 = 0; i1 < n; i1++){
            for(int j1 = 0; j1 < m; j1++){
                if(grid[i1][j1] != k) continue;
                for(int i2 = 0; i2 < n; i2++){
                    for(int j2 = 0; j2 < m; j2++){
                        if(grid[i2][j2] != k - 1) continue;
                        int dis = abs(i1 - i2) + abs(j1 - j2);
                        dp[i1][j1] = min(dp[i1][j1], dp[i2][j2] + dis);
                    }
                }
            }
        }
    }

    if(dp[gi][gj] == 1e9) cout << -1 << endl;
    else cout << dp[gi][gj] << endl;

    return 0;
}
