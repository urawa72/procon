#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
ll MOD = 1e9 + 7;

int main() {
    ll n; cin >> n;
    vector<ll> ac(n);
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        // 絶対値差をカウントする
        ac[a]++;
    }
    // 偶数だったら1、奇数だったら2を初項にする
    ll s = n % 2 + 1;
    ll ans = 1;
    for(ll i = s; i < n; i+=2){
        // 左右対象なので必ず2がでてくる
        if(ac[i] == 2){
            ans *= 2;
            ans %= MOD;
        }else{
            ans = 0;
            break;
        }
    }
    // 奇数の時0が1個でないならダメ
    if(n % 2 != 0 && ac[0] != 1) ans = 0;
    cout << ans << endl;

    // 自分の解答は冗長
    // map<ll, ll> m1;
    // for(ll i = 0; i < n; i++){
    //     ll a; cin >> a;
    //     m1[a]++;
    // }
    // map<ll, ll> m2;
    // ll j = n - 1;
    // for(ll i = 0; i < n; i++){
    //     ll t = abs(j - i);
    //     m2[t]++;
    //     j--;
    // }
    // bool flag = true;
    // for(ll i = 0; i < n; i++){
    //     if(m1[i] != m2[i]){
    //         flag = false;
    //         break;
    //     }
    // }
    // ll ans = 1;
    // for(int i = 1; i <= n / 2; i++){
    //     ans *= 2;
    //     ans %= MOD;
    // }
    // if(flag) cout << ans << endl;
    // else cout << 0 << endl;
}
