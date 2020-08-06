#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    ll k, a, b; cin >> k >> a >> b;
    // 最初に1枚持っているので1回操作増やす
    k++;

    if(b - a <= 2 || k < a){
        // b-a<=2の場合は交換しても得しない
        // k<aの場合は交換できない
        // もともと持っている1枚+kが最大値
        cout << k << endl;
        return 0;
    }else{
        // まずaまで増やす(a枚->1円の操作は最初にk++しているので考慮不要)
        // この時、最低a枚は取得できるので答えに加算
        // 残りのk/2回でb-a枚増やせる(a枚->1円、1円->b枚 なので最大k/2回)
        // もしk%2==1だったら最後に1枚だけ増やせる
        ll ans = a;
        k -= a;
        ans += (k / 2) * (b - a);
        ans += (k % 2);
        cout << ans << endl;
    }


    return 0;
}
