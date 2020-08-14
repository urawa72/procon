#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    V<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    V<int> dp(n + 1, INT_INF);
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i]);
        if(1 < i){
            dp[i] = min(dp[i - 2] + abs(h[i] - h[i - 2]), dp[i]);
        }
    }
    cout << dp[n - 1] << endl;
}
