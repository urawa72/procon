#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    ll n, m; cin >> n >> m;
    if(n < m){
        cout << "NO" << endl;
        return 0;
    }

    V<ll> v(n), w(m);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < m; i++) cin >> w[i];

    // sort(ALL(v));
    // sort(ALL(w), greater<ll>());
    // ll cnt = 0;
    // for(int i = 0; i < m; i++){
    //     auto ite = lower_bound(ALL(v), w[i]);
    //     ll x = v.end() - ite - cnt;
    //     if(0 < x) cnt++;
    //     else{
    //         cout << "NO" << endl;
    //         return 0;
    //     }
    // }
    // cout << "YES" << endl;

    sort(ALL(v), greater<ll>());
    sort(ALL(w), greater<ll>());
    ll p = 0;
    for(int i = 0; i < m; i++){
        if(w[i] <= v[p]){
            p++;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
