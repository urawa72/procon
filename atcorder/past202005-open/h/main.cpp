#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, l; cin >> n >> l;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    ll t1, t2, t3; cin >> t1 >> t2 >> t3;

    V<ll> dp(l + 4, 1e9);
    dp[0] = 0;
    for(int i = 0; i < l; i++){
        if(mp[i + 1]){
            dp[i + 1] = min(dp[i + 1], dp[i] + t1 + t3);
        }else{
            dp[i + 1] = min(dp[i + 1], dp[i] + t1);
        }
        if(mp[i + 2]){
            dp[i + 2] = min(dp[i + 2], dp[i] + t1 + t2 + t3);
        }else{
            if(l < i + 2){
                dp[l] = min(dp[l], dp[i] + (ll)(t1 / 2) + (ll)(t2 / 2));
            }else{
                dp[i + 2] = min(dp[i + 2], dp[i] + t1 + t2);
            }
        }
        if(mp[i + 4]){
            dp[i + 4] = min(dp[i + 4], dp[i] + t1 + t2 * 3 + t3);
        }else{
            if(l < i + 4){
                // ゴールまでの残距離に応じてt2の2.5秒、1.5秒、0.5秒分を加算
                int sub = l - i;
                if(sub == 3) dp[l] = min(dp[l], dp[i] + (ll)(t1 / 2) + (ll)(t2 / 2 * 5));
                if(sub == 2) dp[l] = min(dp[l], dp[i] + (ll)(t1 / 2) + (ll)(t2 / 2 * 3));
                if(sub == 1) dp[l] = min(dp[l], dp[i] + (ll)(t1 / 2) + (ll)(t2 / 2));
            }else{
                dp[i + 4] = min(dp[i + 4], dp[i] + t1 + t2 * 3);
            }
        }
    }

    cout << dp[l] << endl;

    return 0;
}
