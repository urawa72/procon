#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int c; cin >> c;
    int n = 0, m = 0, l = 0;
    for(int i = 0; i < c; i++){
        int x, y, z; cin >> x >> y >> z;
        int ma = max({x, y, z});
        int mi = min({x, y, z});
        int mm = (x + y + z) - (ma + mi);
        l = max(ma, l);
        m = max(mm, m);
        n = max(mi, n);
    }
    cout << n * m * l << endl;

    return 0;
}
