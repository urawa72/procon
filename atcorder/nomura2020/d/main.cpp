#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

template<typename T>
T modPow(T x, T n, const T &mod){
    T res = 1;
    while(n > 0){
        if(n & 1) (res *= x) %= mod;
        (x *= x) %= mod;
        n >>= 1; // nを1bit左にずらす
    }
    return res;
}

// 繰り返し二乗法
ll modPow(ll x, ll a){
    if(a == 1) return x;
    // 指数aが奇数の時はx*x^(a-1)
    if(a % 2) return (x * modPow(x, a - 1)) % MOD;
    // 指数aが偶数の時はx^(a/2)
    ll t = modPow(x, a / 2);
    return (t * t) % MOD;
}

// フェルマーの小定理からxのMOD-2乗を計算
ll modInv(ll x){
    return modPow(x, MOD - 2);
}

// kまでの階乗計算
ll modPerm(ll n, ll k){
    ll ret = 1;
    for(int i = 0; i < k; i++){
        ret = (ret * (n - i)) % MOD;
    }
    return ret;
}

// 二項係数(n = 1e9, k = 1e7まで対応可能))
ll modComb(ll n, ll k){
    ll a, b;
    // n - k + 1からnまでの積
    a = modPerm(n, k);
    // k!
    b = modPerm(k, k);
    return (a * modInv(b)) % MOD;
}

int main() {
    int n; cin >> n;
    V<V<int> > g(n);
    int k = 0;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int p; cin >> p;
        if(p == -1) k++;
        if(p != -1) p--;
        g[i].push_back(p);
        m[i] = p;
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < g[i].size(); j++){

        }
    }
    for(auto p : m){
        if(m[p.second] == -1){
            cnt++;
        }
    }

    cout << modPow<int>(n - 1, k, MOD) * (n - k) % MOD - cnt % MOD << endl;
}
