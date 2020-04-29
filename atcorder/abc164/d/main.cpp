#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string s; cin >> s;
    int n = s.size();
    vector<ll> v(2019, 0);
    ll e = 1, cur = 0;
    v[cur]++;
    for(int i = 0; i < n; i++){
        cur = (cur + (s[n - 1 - i] - '0') * e) % 2019;
        // 指数 10のn乗
        e = (e * 10) % 2019;
        // 余りのカウント
        v[cur]++;
    }
    // 余りが等しいものから2つ選ぶ組み合わせの数を求める
    ll ans = 0;
    for(int i = 0; i < v.size(); i++){
        ans += v[i] * (v[i] - 1) / 2;
    }
    cout << ans << endl;
}
