#include <bits/stdc++.h>
#include <cstring>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n, k; cin >> n >> k;
    V<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    V<int> dp(n + 1, INT_INF);
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= k; j++){
            if(j <= i){
                dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
            }
        }
    }
    cout << dp[n - 1] << endl;


}
