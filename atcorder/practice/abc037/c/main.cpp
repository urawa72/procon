#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n, k; cin >> n >> k;
    vector<ll> v(n + 1);
    v[0] = 0;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        v[i + 1] = v[i] + a;
    }

    ll ans = 0;
    for(int i = 1; i <= n - k + 1; i++){
        ans += v[i + k - 1] - v[i - 1];
    }
    cout << ans << endl;
}
