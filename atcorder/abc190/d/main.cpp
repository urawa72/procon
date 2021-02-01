#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n; cin >> n;

    // 等差数列の和
    ll n2 = n * 2;
    int ans = 0;
    auto check = [&](ll l) {
        ll tmp = n2 / l - l + 1;
        if(abs(tmp) % 2 == 0) ans++;
    };
    for(ll x = 1; x * x <= n2; x++){
        if(n2 % x) continue;
        ll y = n2 / x;
        check(x);
        if(x != y) check(y);
    }
    cout << ans << endl;

    return 0;
}
