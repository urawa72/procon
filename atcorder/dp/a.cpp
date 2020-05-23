#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a < b) a = b; }
template<class T> void chmin(T& a, T b) { if(a > b) a = b; }
typedef long long ll;
const ll INF = 1LL << 60;

int main() {
    int n; cin >> n;
    vector<ll> h(n);
    rep(i, n) cin >> h[i];

    vector<ll> dp(n);
    rep(i, n) dp[i] = INF;
    dp[0] = 0;
    REP(i, 1, n){
        ll tmp = abs(h[i] - h[i - 1]);
        chmin(dp[i], dp[i - 1] + tmp);
        if(i > 1){
            tmp = abs(h[i] - h[i - 2]);
            chmin(dp[i], dp[i - 2] + tmp);
        }
    }
    OP(dp[n - 1]);
}
