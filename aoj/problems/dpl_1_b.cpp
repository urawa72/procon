#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int N, W; cin >> N >> W;
    vector<int> value(N);
    vector<int> weight(N);
    for(int i = 0; i < N; i++){
        cin >> value[i] >> weight[i];
    }

    // dpテーブルを初期化する（未選択状態）
    int dp[110][10010];
    for(int i = 0; i <= W; i++){
        dp[0][i] = 0;
    }

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
