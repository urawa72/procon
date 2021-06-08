#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

// ナップサック問題
int main() {
    ll N, W; cin >> N >> W;
    vector<ll> weight(N);
    vector<ll> value(N);
    for(int i = 0; i < N; i++){
        cin >> weight[i] >> value[i];
    }

    // dpテーブル初期化
    vector<vector<ll> > dp(N + 1, vector<ll>(W + 1, 0));

    // 配るDP
    for(int i = 0; i < N; i++){
        for(int w = 0; w <= W; w++){
            if(w >= weight[i]){
                dp[i + 1][w] = max(dp[i][w - weight[i]] + value[i], dp[i][w]);
            }else{
                dp[i + 1][w] = dp[i][w];
            }
        }
    }
    cout << dp[N][W] << endl;
}
