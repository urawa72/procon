#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }

int main() {
    ll n, x; cin >> n >> x;
    V<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    V<ll> w(n);
    for(int i = 1; i < n; i++){
        if(x <= v[i]){
            w.push_back(v[i] - x);
            w.push_back(x - v[i - 1]);
        }else{
            w.push_back(v[i] - v[i - 1]);
        }
    }

    for(int i = 0; i < w.size(); i++){

    }

}
