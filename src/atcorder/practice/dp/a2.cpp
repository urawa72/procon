#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    vector<ll> dp(n);
    for(int i = 0; i < n; i++){
        dp[i] = 1LL << 60;
    }
    dp[0] = 0;
    // 配るDP
    for(int i = 0; i < n; i++){
        if(i + 1 < n){
            ll cost = abs(h[i] - h[i + 1]);
            dp[i + 1] = min(dp[i + 1], dp[i] + cost);
        }
        if(i + 2 < n){
            ll cost = abs(h[i] - h[i + 2]);
            dp[i + 2] = min(dp[i + 2], dp[i] + cost);
        }
    }
    cout << dp[n - 1] << endl;
}
