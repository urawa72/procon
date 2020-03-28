#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
typedef long long ll;

int n;
int a[10010];
int dp[10010];

int main() {
    cin >> n;
    rep(i, n) cin >> a[i];

    // 初期値
    dp[0] = 0;
    // a[i]を選ぶ場合と選ばない場合の最大値をとってdp[i+1]に設定する
    // 漸化式
    for(int i = 0; i < n; i++){
        dp[i + 1] = max(dp[i], dp[i] + a[i]);
    }

    // 最後に総和が入っている
    OP(dp[n]);
}
// 5
// 5 -3 4 -2 2
