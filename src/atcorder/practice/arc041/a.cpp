#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll x, y, k; cin >> x >> y >> k;
    ll ans = 0;
    if(k <= y) ans = x + k;
    else ans = x + y - (k - y);
    cout << ans << endl;
}

