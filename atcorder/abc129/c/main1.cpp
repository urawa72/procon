#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
typedef long long ll;

int main() {
    ll mod = 1e9+7;
    int n, m; cin >> n >> m;
    vector<bool> v(n + 1, false);
    rep(i, m){
        int a; cin >> a;
        v[a] = true;
    }

    // vector<int> dp(n + 1);
    // dp[0] = 1;
    // for(int i = 0; i < n; i++){
    //             cout << "i:" << i << endl;
    //     for(int j = i + 1; j <= min(n, i + 2); j++){
    //         if(v[i]){
    //             dp[j] += dp[i];
    //             dp[j] %= mod;
    //             cout << "j[" << j << "]" << dp[j] << endl;
    //         }
    //     }
    // }
    vector<int> dp(n + 2);
    dp[n] = 1;
    for(int i = n - 1; i >= 0; i--){
        // 壊れている時
        if(v[i]){
            dp[i] = 0;
            continue;
        }
        dp[i] = (dp[i + 1] + dp[i + 2]) % mod;
    }
    cout << dp[0] << endl;
}

