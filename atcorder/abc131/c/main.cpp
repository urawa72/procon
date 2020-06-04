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
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll l = lcm(c, d);
    ll e = (b / c - (a - 1) / c) + (b / d - (a - 1) / d);
    ll f = (b / l - (a - 1) / l);
    cout << (b - a + 1) - e + f << endl;

}
