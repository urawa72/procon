#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n; cin >> n;

    // 累積和と累積和の最大値を保持する
    V<ll> v(n + 1), w(n + 1);
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        v[i + 1] = v[i] + a;
        w[i + 1] = max(v[i + 1], w[i]);
    }

    // 累積和v[i]の前に累積和の最大値w[i]を足して判定
    ll ans = 0, sum = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, sum + w[i]);
        sum += v[i];
    }

    cout << ans << endl;

    return 0;
}
