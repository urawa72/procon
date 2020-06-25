#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define MOD 1000000007
#define IINF INT_MAX
#define INF 1LL << 30

ll mod_pow(ll x, ll a){
    if(a == 1) return x;
    if(a % 2) return (x * mod_pow(x, a - 1)) % MOD;
    ll t = mod_pow(x, a / 2);
    return (t * t) % MOD;
}

ll mod_inv(ll x){
    return mod_pow(x, MOD - 2);
}

ll mod_perm(ll n, ll k){
    ll ret = 1;
    for(int i = 0; i < k; i++){
        ret = (ret * (n - i)) % MOD;
    }
    return ret;
}

ll mod_comb(ll n, ll k){
    ll a, b;
    a = mod_perm(n, k);
    b = mod_perm(k, k);
    return (a * mod_inv(b)) % MOD;
}

int main() {
    int x, y; cin >> x >> y;
    if((x + y) %3){
        cout << 0 << endl;
        return 0;
    }

    // 移動回数を求める
    int n = (x + y) / 3;
    // +(1,2)=+(1,0)+(1,1)なので(1,0)の移動だけに変換すると
    // (1,1)をn回余計に動いているからx,yからnを引いておく
    x -= n; y -= n;
    if(x < 0 || y < 0){
        cout << 0 << endl;
        return 0;
    }
    cout << mod_comb(x + y, x) << endl;

    return 0;
}
