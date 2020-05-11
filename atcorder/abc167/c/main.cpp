#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int n, m;
ll x;
V<ll> c;
V<V<ll> > a;

int main() {
    cin >> n >> m;
    cin >> x;
    c.resize(n);
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
        for(int j = 0; j < m; j++){
            ll t; cin >> t;
            a[i].push_back(t);
        }
    }

    ll res = INF;
    for(int bit = 0; bit < (1 << n); bit++){
        ll sum = 0;
        V<ll> ans(n);
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                sum += c[i];
                for(int j = 0; j < m; j++){
                    ans[j] += a[i][j];
                }
            }
        }
        bool flag = true;
        for(int i = 0; i < m; i++){
            if(ans[i] >= x){
                continue;
            }else{
                flag = false;
                break;
            }
        }
        if(flag) res = min(sum, res);
    }
    if(res == INF) cout << -1 << endl;
    else cout << res << endl;
}
