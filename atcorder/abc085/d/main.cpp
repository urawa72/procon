#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll n, h; cin >> n >> h;
    V<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    // 予め降順ソート
    sort(ALL(a), greater<ll>());
    sort(ALL(b), greater<ll>());

    // a[0]より大きい攻撃力の刀は全部投げる
    ll sum = 0, cnt = 0;;
    for(int i = 0; i < n; i++){
        if(b[i] < a[0]) break;
        sum += b[i];
        cnt++;
        if(h <= sum){
            cout << cnt << endl;
            return 0;
        }
    }

    // 残りhをa[0]で攻撃し続ける
    ll ans = cnt;
    ll sub = h - sum;
    // 割り切れない時は+1
    if(sub % a[0] == 0) ans += (sub / a[0]);
    else ans += (sub / a[0] + 1);
    cout << ans << endl;

}
