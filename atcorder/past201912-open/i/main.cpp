#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int INF = 1 << 30;

int main() {
    int n, m; cin >> n >> m;
    V<int> s(m, 0), c(m);
    for(int i = 0; i < m; i++){
        string tmp;
        cin >> tmp >> c[i];
        // Yが立っているかどうかをbit配列で管理する
        for(int j = 0; j < n; j++){
            if(tmp[j] == 'Y') s[i] += 1 << j;
        }
    }

    // Yが0のとき〜すべてYの状態は2^Nで表せる
    V<int> dp(1 << n, INF);
    dp[0] = 0;
    for(int i = 0; i < m; i++){
        for(int bit = 0; bit < (1 << n); bit++){
            // 和集合でdp[bit] -> dp[bit | s[i]]の状態に遷移
            dp[bit | s[i]] = min(dp[bit | s[i]], dp[bit] + c[i]);
        }
    }

    if(dp[(1 << n) - 1] == INF) cout << -1 << endl;
    else cout << dp[(1 << n) - 1] << endl;
    return 0;
}
