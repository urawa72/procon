#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

const ll MOD = 1e9 + 7;

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
    int s; cin >> s;
    if(s < 3){
        cout << 0 << endl;
        return 0;
    }

    // 数列の長さはs/3が最大
    int m = s / 3;
    ll ans = 0;
    // 重複組み合わせ
    for(int i = 1; i <= m; i++){
        ll n = s - i * 3;
        ans += mod_comb(n + i - 1, n);
        ans %= MOD;
    }
    cout << ans << endl;

    return 0;
}
