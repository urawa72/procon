#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, k; cin >> n >> k;

    ll ans = 0;
    for(ll i = 2; i <= 2 * n; i++){
        ll j = i - k;
        if(j < 2 || 2 * n < j) continue;
        ans += min(i - 1, 2 * n + 1 - i) * min(j - 1, 2 * n + 1 - j);
    }
    cout << ans << endl;

    return 0;
}
