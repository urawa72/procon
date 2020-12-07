#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll k, a, b; cin >> k >> a >> b;

    if(k < a || b - a <= 1){
        cout << 1 + k << endl;
        return 0;
    }

    cout << a + (k - (a - 1)) / 2 * (b - a) + (k - (a - 1)) % 2 << endl;

    return 0;
}
