#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

int dp[55][10010][55];
int main() {
    int w; cin >> w;
    int n, k; cin >> n >> k;
    V<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    // 3変数のDP
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= w; j++){
            for(int l = 0; l <= k; l++){
                if(j + a[i] <= w){
                    dp[i + 1][j + a[i]][l + 1] = max(dp[i][j][l] + b[i], dp[i][j + a[i]][l]);
                }
                dp[i + 1][j][l] = max(dp[i + 1][j][l], dp[i][j][l]);

            }
        }
    }
    cout << dp[n][w][k] << endl;
}
