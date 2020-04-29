#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

vector<pair<ll, ll> > prime_factorize(ll n){
    vector<pair<ll, ll> > res;
    for(ll i = 2; i * i <= n; i++){
        if(n % i != 0) continue;

        ll ex = 0;
        while(n % i == 0){
            ex++;
            n /= i;
        }
        res.push_back({i, ex});
    }
    if(n != 1) res.push_back({n, 1});
    return res;
}

int main() {
    ll n, p; cin >> n >> p;
    const auto &pf = prime_factorize(p);
    ll ans = 1;
    for(auto p : pf){
        for(int i = 0; i < p.second / n; i++) ans *= p.first;
    }
    OP(ans);
}
