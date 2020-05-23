#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n, m, x, y; cin >> n >> m >> x >> y;

    V<ll> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    // lower_bound使う
    ll t = 0, ans = 0;
    while(1){
        if(a[n - 1] < t)break;
        t = *lower_bound(all(a), t);
        t += x;
        if(b[m - 1] < t) break;
        t = *lower_bound(all(b), t);
        t += y;
        ans++;
    }
    cout << ans << endl;

    // queueを使った解答
    // queue<ll> a, b;
    // for(int i = 0; i < n; i++){
    //     ll ax; cin >> ax;
    //     a.push(ax);
    // }
    // for(int i = 0; i < m; i++){
    //     ll by; cin >> by;
    //     b.push(by);
    // }
    //
    // ll cnt = 0, ax = 0, by = 0, now = 0;
    // while(!a.empty()){
    //     ax = a.front();
    //     a.pop();
    //     if(now <= ax){
    //         while(!b.empty()){
    //             by = b.front();
    //             b.pop();
    //             if(ax + x <= by){
    //                 now = by + y;
    //                 cnt++;
    //                 break;
    //             };
    //         }
    //     }
    // }
    // cout << cnt << endl;
}
