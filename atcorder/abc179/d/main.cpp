#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const ll MOD = 998244353;

int main() {
    int n, k; cin >> n >> k;
    set<int> se;
    for(int i = 0; i < k; i++){
        int l, r; cin >> l >> r;
        for(int j = l; j <= r; j++){
            se.insert(j);
        }
    }

    int mi = 200001;
    for(auto ss : se) {
        mi = min(mi, ss);
    }

    V<ll> dp(n + 1, 0);
    dp[1] = 1;
    for(int i = 1; i + mi <= n; i++){
        for(auto s : se){
            if(i + s <= n) {
                dp[i + s] += dp[i];
                dp[i + s] %= MOD;
            }else{
                break;
            }
        }
    }
    cout << dp[n] % MOD << endl;

    return 0;
}
