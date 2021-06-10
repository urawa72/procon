#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a < b) a = b; }
template<class T> void chmin(T& a, T b) { if(a > b) a = b; }
typedef long long ll;

const ll INF = 1LL << 60;
const ll MAX_N = 110;
const ll MAX_V = 100100;

int main() {
    ll N, W; cin >> N >> W;
    vector<ll> weight(N);
    vector<ll> value(N);
    for(int i = 0; i < N; i++){
        cin >> weight[i] >> value[i];
    }

    vector<vector<ll> > dp(MAX_N, vector<ll>(MAX_V, INF));
    dp[0][0] = 0;
    for(ll i = 0; i < N; i++){
        for(ll v = 0; v <= MAX_V; v++){
            if(v - value[i] >= 0){
                chmin(dp[i + 1][v], dp[i][v - value[i]] + weight[i]);
            }
            chmin(dp[i + 1][v], dp[i][v]);
        }
    }
    ll ans = 0;
    for(int v = 0; v < MAX_V; v++){
        if(dp[N][v] <= W) ans = v;
    }
    cout << ans << endl;
}
