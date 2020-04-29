#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

// 約数列挙
vector<ll> enum_divisors(ll n){
    vector<ll> res;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            res.push_back(i);
            // 割る数と商が同じでなければ商も追加
            if(n / i != i) res.push_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    ll n = 2020;
    const auto &res = enum_divisors(n);
    rep(i, res.size()) OP(res[i]);
}
