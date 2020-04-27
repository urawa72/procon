#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> a(n + 1);
    a[0] = 0;
    // 累積和
    for(int i = 1; i <= n; i++){
        ll an; cin >> an;
        a[i] = a[i - 1] + an;
    }
    ll ans = 1LL << 60;
    for(int i = 1; i < n; i++){
        ll sum = abs(a[i] - (a[n] - a[i]));
        ans = min(ans, sum);
    }
    cout << ans << endl;
}
