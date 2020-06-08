#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

ll mod_pow(ll n, ll k, ll m){
    if(k == 0){
        return 1;
    }else if(k % 2 == 1){
        return mod_pow(n, k - 1, m) * n % m;
    }else{
        ll t = mod_pow(n, k / 2, m);
        return t * t % m;
    }
}

int main() {
    ll n, m, p; cin >> n >> m >> p;
    cout << mod_pow(n, p, m) << endl;
}
