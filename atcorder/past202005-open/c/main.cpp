#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll a, r, n; cin >> a >> r >> n;

    ll x = 1;
    for(ll i = 1; i <= n - 1; i++){
        x *= r;
        if(1000000000 < a * x){
            cout << "large" << endl;
            return 0;
        }
    }
    cout << a * x << endl;

    return 0;
}
