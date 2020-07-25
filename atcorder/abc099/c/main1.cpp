#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

// メモ探索用
vector<int> memo;
int N;
int rec(int n);

int main() {
    // DP
    // int n; cin >> n;
    // vector<int> dp(n + 1, 1e9);
    // dp[0] = 0;
    // for(int i = 0; i <= n; i++){
    //     for(int p6 = 1; p6 + i <= n; p6 *= 6){
    //         dp[i + p6] = min(dp[i + p6], dp[i] + 1);
    //     }
    //     for(int p9 = 1; p9 + i <= n; p9 *= 9){
    //         dp[i + p9] = min(dp[i + p9], dp[i] + 1);
    //     }
    // }
    // cout << dp[n] << endl;

    // メモ探索
    cin >> N;
    memo.assign(N + 1, -1);
    cout << rec(N) << endl;
}

int rec(int n){
    if(n == 0) return 0;
    if(memo[n] != -1) return memo[n];
    int num = n;
    for(int i = 1; i <= n; i *= 6){
        num = min(num, rec(n - i) + 1);
    }
    for(int i = 1; i <= n; i *= 9){
        num = min(num, rec(n - i) + 1);
    }
    return memo[n] = num;
}

