#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    ll m, r; cin >> m >> r;
    V<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(ALL(v), greater<ll>());
    ll sum = 0;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }

    if(r <= sum / k){
        cout << 0 << endl;
        return 0;
    }

    ll res = r * k - (sum - v[k - 1]);
    if(res <= m){
        cout << res << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}
