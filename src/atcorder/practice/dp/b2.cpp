#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    vector<ll> dp(n, 1LL << 60);
    dp[0] = 0;
    // 配るDP
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= k; j++){
            dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }
    cout << dp[n - 1] << endl;
    
}
