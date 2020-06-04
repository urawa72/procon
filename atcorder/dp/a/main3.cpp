#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int n;
vector<ll> h;
vector<ll> dp;

ll rec(int i) {
    if(dp[i] < 1LL << 60) return dp[i];
    if(i == 0) return 0;
    ll res = 1LL << 60;
    res = min(res, rec(i - 1) + abs(h[i] - h[i - 1]));
    if(i > 1) res = min(res, rec(i - 2) + abs(h[i] - h[i - 2]));
    return dp[i] = res;
}

int main() {
    cin >> n;
    h.resize(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    dp.assign(n, 1LL << 60);
    // 貰うDPで
    cout << rec(n - 1) << endl;
}
