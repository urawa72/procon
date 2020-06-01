#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll a, b, c; cin >> a >> b >> c;
    ll d = c - a - b;
    if(0 < d && 4 * a * b < d * d) cout << "Yes" << endl;
    else cout << "No" << endl;
}
