#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

// 素因数分解
vector<pair<ll, ll> > prime_factrize(ll n){
    vector<pair<ll, ll> > res;
    for(ll i = 2; i * i <= n; i++){
        // nをiで割り切れないと素数でない
        // nを小さい素数で割り続けているので合成数はヒットしない
        if(n % i != 0) continue;
        ll ex = 0; // 指数

        // 可能な限り割り続けて指数を求める
        while(n % i == 0){
            ex++;
            n /= i;
        }
        // iのex乗
        res.push_back({i, ex});
    }
    // 最後に残った数
    if(n != 1) res.push_back({n, 1});
    return res;
}

int main() {
    ll n = 2020;
    const auto &res = prime_factrize(n);
    cout << n << ":";
    for(auto p : res){
        rep(i, p.second) cout << " " << p.first;
    }
    cout << endl;

    // 素因数分解で約数の個数
    ll r = 1;
    for(auto p : res) r *= p.second + 1;
    OP(r);

    // 約数の個数をMODで割ったあまり
    // 素数の指数から約数の個数を算出する
    const int MOD = 1000000007;
    // 配列で素数とその指数をカウント
    vector<ll> ex(n + 1, 0);
    for(ll p = 2; p <= n; p++){
        const auto &res = prime_factrize(n);
        for(auto p : res) ex[p.first] += p.second;
    }
    ll r2 = 0;
    for(int p = 2; p <= n; p++){
        r2 *= ex[p] + 1; // 約数の個数は(exp + 1)の積
        r2 %= MOD;
    }
    OP(r2);
}
