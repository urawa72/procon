#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n, k; cin >> n >> k;
    V<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    V<P<ll, int> > c(n);
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        c[i] = make_pair(x, i);
    }

    sort(ALL(c));
    cout << c[n - 1].first << endl;


    return 0;
}
