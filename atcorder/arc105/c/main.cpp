#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    V<int> w(n);
    for(int i = 0; i < n; i++) cin >> w[i];
    V<P<ll, ll> > vv(m);
    for(int i = 0; i < m; i++){
        ll l, v; cin >> l >> v;
        vv[i] = make_pair(l, v);
    }

    ll sum = accumulate(ALL(w), 0);
    ll ans = 0;
    bool flag = true;
    for(int i = 0; i < m; i++){
        if(sum < vv[i].second){
            ans = 0;
        }else{
            ll tmp = sum / vv[i].second;
            if(vv[i].first < tmp){
                flag = false;
                break;
            }
            ll tmp2 = 0;
            if(n <= tmp) tmp2 = (n - 1) * vv[i].first;
            else tmp2 = (n - 1 - tmp) * vv[i].first;
            ans = max(ans, tmp2);
        }
    }
    if(!flag) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
