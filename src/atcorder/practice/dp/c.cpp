#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll v[100010][3];
    for(int i = 0; i < n; i++){
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    ll dp[100010][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(j == k) continue;
                dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + v[i][k]);
            }
        }
    }
    ll res = 0;
    for(int i = 0; i < 3; i++){
        res = max(res, dp[n][i]);
    }
    cout << res << endl;
}
