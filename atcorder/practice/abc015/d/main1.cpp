#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int W, N, K; cin >> W >> N >> K;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; i++){
        cin >> a[i] >> b[i];
    }
    vector<vector<vector<int> > > dp(55, vector<vector<int> > (10010, vector<int>(55, 0)));
    for(int i = 0; i < N; i++){
        // 使った幅
        for(int w = 0; w <= W; w++){
            // 使った枚数
            for(int k = 0; k <= K; k++){
                // 幅が足りる時
                if(w + a[i] <= W){
                    // 貼る
                    dp[i + 1][w + a[i]][k + 1] = max(dp[i][w][k] + b[i], dp[i][w + a[i]][k]);
                }
                //  貼らない
                dp[i + 1][w][k] = max(dp[i + 1][w][k], dp[i][w][k]);
            }
        }
    }
    cout << dp[N][W][K] << endl;
}
