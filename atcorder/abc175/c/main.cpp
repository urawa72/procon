#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    ll x, k, d; cin >> x >> k >> d;
    // -でも反転すれば+と同じなので+で考える
    x = abs(x);
    // 可能な限り0に近づくために何回移動するか決める
    ll a = x / d < k ? x / d : k;
    x -= a * d;
    if((k - a) % 2) cout << abs(x - d) << endl;
    else cout << abs(x) << endl;
    return 0;
}
