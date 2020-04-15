#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    ll ans = 1 << 30;
    for(int i = 0; i < n - k + 1; i++){
        int r = i + k - 1;
        ll lr = abs(x[i]) + abs(x[i] - x[r]);
        ll rl = abs(x[r]) + abs(x[i] - x[r]);
        ans = min({ans, lr, rl});
    }
    cout << ans << endl;
}
