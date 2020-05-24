#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    // 最初がxより大きかったら減らす
    // これをしないとa[i + 1]が負の値になる場合がある
    if(a[0] > x){
        ans += a[0] - x;
        a[0] = x;
    }
    for(int i = 1; i < n; i++){
        if(a[i] + a[i - 1] > x){
            ll tmp = a[i] + a[i - 1] - x;
            ans += tmp;
            a[i] -= tmp;
        }
    }
    cout << ans << endl;
}
