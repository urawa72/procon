#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

// いもす法
// https://www.slideshare.net/chokudai/abc035
// https://imoz.jp/algorithms/imos_method.html
int main() {
    ll n, q; cin >> n >> q;
    vector<ll> v(n + 1);
    for(int i = 0; i < q; i++){
        ll l, r; cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }

    vector<ll> w(n + 1, 0);
    for(int i = 1; i <= n; i++){
        w[i] = w[i - 1] + v[i];
    }

    for(int i = 1; i <= n; i++){
        if(w[i] & 1) cout << 1;
        else cout << 0;
    }
    cout << endl;
}
