#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int l, r; cin >> l >> r;
        ll x = (r - l) - l + 1;
        if(x < 0) cout << 0 << endl;
        else cout << x * (x + 1) / 2 << endl;
    }

    return 0;
}
