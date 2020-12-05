#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }

int main() {
    ll n; cin >> n;

    ll l = lcm(2, 3);
    for(ll i = 4; i <= n; i++){
        l = lcm(l, i);
    }
    cout << l + 1 << endl;

    return 0;
}
