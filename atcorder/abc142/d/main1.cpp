#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

// 最大公約数
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

// 約数列挙
set<ll> enum_divisors(ll N, ll M){
    set<ll> res;
    for(ll i = 1; i * i <= max(N, M); i++){
        if(N % i == 0 && M % i == 0){
            res.insert(i);
        }
        if(N / i > 0 && M % (N / i) == 0) res.insert(N / i);
        if(M / i > 0 && N % (M / i) == 0) res.insert(M / i);
    }
    return res;
}

// 素数判定
bool is_prime(ll N){
    for(ll i = 2; i * i <= N; i++){
        if(N % i == 0) return false;
    }
    return true;
}

// 素因数分解
vector<pair<ll, ll> > prime_factorize(ll N){
    vector<pair<ll, ll> > res;
    for(ll i = 2; i * i <= N; i++){
        if(N % i != 0) continue;
        ll ex = 0;
        while(N % i == 0){
            ex++;
            N /= i;
        }
        res.push_back({i, ex});
    }
    if(N != 1) res.push_back({N, 1});
    return res;
}


int main() {
    ll a, b; cin >> a >> b;;

    // 最大公約数を素因数分解して素因数の個数+1する
    ll g = gcd(a, b);
    V<P<ll, ll> > pf = prime_factorize(g);
    cout << pf.size() + 1 << endl;

    // 約数列挙して素因数判定する
    // set<ll> res = enum_divisors(a, b);
    // ll cnt = 0;
    // for(auto i = res.begin(); i != res.end(); i++){
    //     if(is_prime(*i)) cnt++;
    // }
    // cout << cnt << endl;
}
