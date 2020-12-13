#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n, m, t; cin >> n >> m >> t;
    ll on = n;
    ll lst = 0;
    for(int i = 0; i < m; i++){
        ll a, b; cin >> a >> b;
        n -= (a - lst);
        if(n <= 0){
            cout << "No" << endl;
            return 0;
        }
        n += (b - a);
        n = min(on, n);
        lst = b;
    }

    n -= (t - lst);
    if(0 < n) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
