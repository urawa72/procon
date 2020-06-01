#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

// const auto &pf = prime_factorize(N);
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
    ll n; cin >> n;
    V<P<ll, ll> > v;
    v = prime_factorize(n);

    ll ans = 0;
    for(int i = 0; i < (int)v.size(); i++){
        for(ll j = 1; j <= v[i].second; j++){
            if(n % (ll)pow(v[i].first, j) == 0){
                n /= (ll)pow(v[i].first, j);
                ans++;
            }else{
                break;
            }
        }
        if(n == 1) break;
    }
    cout << ans << endl;
}
