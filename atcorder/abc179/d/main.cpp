#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const ll MOD = 998244353;

int main() {
    int n, k; cin >> n >> k;
    V<P<int, int> > v(k);
    for(int i = 0; i < k; i++) cin >> v[i].first >> v[i].second;

    // dpを累積和で高速化
    V<ll> dp(n, 0), s(n + 1, 0);
    dp[0] = 1, s[1] = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < k; j++){
            int l = max(0, i - v[j].second);
            int r = max(0, i - v[j].first + 1);
            dp[i] += (s[r] - s[l] + MOD) % MOD;
            dp[i] %= MOD;
        }
        s[i + 1] = dp[i] + s[i];
        s[i + 1] %= MOD;
    }
    cout << dp[n - 1] << endl;

    return 0;
}
