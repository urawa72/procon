#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;

int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    V<int> dp(n + 1, INT_INF);
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        int c1 = abs(a[i + 1] - a[i]);
        dp[i + 1] = min(dp[i] + c1, dp[i + 1]);
        if(i + 2 < n){
            int c2 = abs(a[i + 2] - a[i]);
            dp[i + 2] = min(dp[i] + c2, dp[i + 2]);
        }
    }
    cout << dp[n - 1] << endl;
}
