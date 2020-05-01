#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll x; cin >> x;
    // 6と5の繰り返しが最も良い
    ll ans = x / 11 * 2;
    // 余りが7以上ならもう2回、6以下なら1回でOK
    // そもそもx <= 11でも上の計算が0なので以下の式で計算できる
    x %= 11;
    if(x > 6) ans += 2;
    else if(x > 0) ans++;
    cout << ans << endl;

    // 冗長
    // ll r = x % 11;
    // if(11 < x){
    //     if(r == 0) cout << x / 11 * 2 << endl;
    //     else if(r <= 6) cout << x / 11 * 2 + 1 << endl;
    //     else cout << x / 11 * 2 + 2 << endl;
    // }else if(x <= 6){
    //     cout << 1 << endl;
    // }else{
    //     cout << 2 << endl;
    // }
}

