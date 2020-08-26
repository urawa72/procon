#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

int n, ng1, ng2, ng3;

int main() {
    cin >> n >> ng1 >> ng2 >> ng3;

    if(n == ng1 || n == ng2 || n == ng3){
        cout << "NO" << endl;
        return 0;
    }

    V<int> dp(n + 10, INT_INF);
    dp[n] = 0;
    for(int i = n - 1; i >= 0; i--){
        if(i == ng1 || i == ng2 || i == ng3) continue;
        dp[i] = min({dp[i + 1], dp[i + 2], dp[i + 3]}) + 1;
    }

    if(dp[0] <= 100) cout << "YES" << endl;
    else cout << "NO" << endl;

}
