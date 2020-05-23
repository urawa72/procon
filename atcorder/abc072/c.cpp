#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    // 配列にセット
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    // そのまま, -1, +1の個数を連想配列でカウント
    map<ll, ll> m1, m2, m3;
    for(int i = 0; i < n; i++){
        m1[v[i]]++;
        m2[v[i] + 1]++;
        m3[v[i] - 1]++;
    }
    ll ans = 0;
    // 配列の要素をkeyに個数を足す
    for(int i = 0; i < n; i++){
        ll sum = m1[v[i]] + m2[v[i]] + m3[v[i]];
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
