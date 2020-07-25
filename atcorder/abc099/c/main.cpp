#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD =  1000000007;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    V<int> dp(100010, 1e9);
    dp[0] = 0;
    for(int i = 1; i <= 100000; i++){
        int p = 1;
        while(p <= i){
            dp[i] = min(dp[i], dp[i - p] + 1);
            p *= 6;
        }
        p = 1;
        while(p <= i){
            dp[i] = min(dp[i], dp[i - p] + 1);
            p *= 9;
        }
    }
    cout << dp[n] << endl;

    return 0;
}
