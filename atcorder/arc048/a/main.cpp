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
    ll a, b; cin >> a >> b;

    if(a < 0 && b < 0) cout << abs(b - a) << endl;
    else if(a < 0) cout << abs(a) + b - 1 << endl;
    else cout << b - a << endl;

    return 0;
}
