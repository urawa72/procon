#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n; cin >> n;
    ll MOD = 10007;

    V<ll> v(n);
    v[0] = 0, v[1] = 0, v[2] = 1;

    for(ll i = 3; i < n; i++){
        v[i] = (v[i - 1] + v[i - 2] + v[i - 3]) % MOD;
    }
    cout << v[n - 1] << endl;
}
