#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll a, b, c; cin >> a >> b >> c;
    ll mod = 998244353;

    ll x = (a * (a + 1)) / 2 % mod;
    ll y = (b * (b + 1)) / 2 % mod;
    ll z = (c * (c + 1)) / 2 % mod;
    cout << x * y % mod * z % mod << endl;


    return 0;
}
