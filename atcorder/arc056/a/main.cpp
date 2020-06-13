#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll a, b, k, l; cin >> a >> b >> k >> l;

    ll x = k * a;
    ll y = (k / l) * b + (k % l) * a;
    ll z = (k / l + 1) * b;
    cout << min({x, y, z}) << endl;

    return 0;
}
