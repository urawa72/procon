#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b; cin >> a >> b;

    ll n = 2 * a + 100;
    if(b < n) cout << n - b << endl;
    else cout << 0 << endl;

    return 0;
}
