#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;
    vector<ll> h(n);
    for(ll i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(all(h));
    ll ans = 1LL << 60;
    k--;
    for(int i = k; i < n; i++){
        ans = min(ans, h[i] - h[i - k]);
    }
    cout << ans << endl;
}
