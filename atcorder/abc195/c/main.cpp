#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n; cin >> n;

    ll ans = 0;
    if(1000 <= n) ans += n - 999;
    if(1000000 <= n) ans += n - 999999;
    if(1000000000 <= n) ans += n - 999999999;
    if(1000000000000 <= n) ans += n - 999999999999;
    if(1000000000000000 <= n) ans += n - 999999999999999;

    cout << ans << endl;


    return 0;
}
