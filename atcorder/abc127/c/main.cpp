#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    int mi = 100000, ma = 0;
    for(int i = 0; i < m; i++){
        int l, r; cin >> l >> r;
        ma = max(ma, l);
        mi = min(mi, r);
    }

    int x = mi - ma;
    if(x < 0) cout << 0 << endl;
    else cout << x + 1 << endl;

    return 0;
}
