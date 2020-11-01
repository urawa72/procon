#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll a, b; cin >> a >> b;

        ll x = (b * (b + 1)) / 2;
        ll y = 0;
        if(a != 1) {
            a--;
            y = (a * (a + 1)) / 2;
        }
        ans += (x - y);
    }
    cout << ans << endl;

    return 0;
}
