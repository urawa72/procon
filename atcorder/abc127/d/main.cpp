#include <bits/stdc++.h>
#include <functional>
#include <queue>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;

    map<ll, ll> mp;
    priority_queue<int> q;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        mp[a]++;
        q.push(a);
    }

    for(int i = 0; i < m; i++){
        ll b, c; cin >> b >> c;
        mp[c] += b;
        q.push(c);
    }

    ll ans = 0;
    while(!q.empty()){
        ll t = q.top();
        q.pop();
        if(mp[t] == 0) continue;
        if(0 <= n - mp[t]){
            ans += t * mp[t];
            n -= mp[t];
            mp[t] = 0;
        }else{
            ans += t * n;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
