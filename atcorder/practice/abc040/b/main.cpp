#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const ll INF = 1LL << 30;

int main() {
    ll n; cin >> n;

    // H * WをHはH*H<=n,WはH*W<=nまで試す
    ll ans = INF;
    for(ll i = 1; i * i <= n; i++){
        for(ll j = i; i * j <= n; j++){
            ll tmp = abs(i - j) + (n - i * j);
            ans = min(ans, tmp);
        }
    }
    cout << ans << endl;
}
