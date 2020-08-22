#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n;
    cin >> n;
    V<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll ans = 1;
    // 入力の最初が0でなければ木にならない
    if (v[0] != 0) ans = 0;
    sort(ALL(v));
    // 2つ0が存在したら木にならない
    if (2 < n && v[1] == 0) ans = 0;

    ll cnt = 1, p = 1;
    for(int i = 1; i < n; i++){
        // 同距離の頂点数をカウント
        if(v[i - 1] == v[i]) cnt++;
        // 頂点距離が変わったら係数に
        else if(v[i - 1] + 1 == v[i]){
            p = cnt;
            cnt = 1;
        // 1より大きい数字で離れていたら木にならない
        }else{
            ans = 0;
        }
        // 前の頂点数を今の頂点数回乗じる
        ans *= p;
        ans %= 998244353;
    }
    cout << ans << endl;

    return 0;
}
