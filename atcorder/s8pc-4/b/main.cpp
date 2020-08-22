#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    V<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll ans = 1LL << 60;
    for(int bit = 0; bit < (1 << n); bit++){
        // 1がk個立っている場合のみ
        if(__builtin_popcount(bit) != k) continue;
        // 常に一番最初以上でないといけない
        // 一番最初とは等しくても良いので-1しておく
        ll s = v[0] - 1, sum = 0;
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                if(v[i] <= s){
                    // 1高くして差分を加算する
                    s++;
                    sum += s - v[i];
                }else{
                    // 一番高いのを更新する
                    s = v[i];
                }
            }else{
                // 一番高いのを更新する
                s = max(s, v[i]);
            }
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;

    return 0;
}
