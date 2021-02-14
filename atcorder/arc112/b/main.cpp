#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll b, c; cin >> b >> c;

    // Bの右
    ll br = b + (c - 2) / 2;
    // Bの左
    ll bl = b - c / 2;
    // -Bの右
    ll mbr = -b + (c - 1) / 2;
    // -Bの左
    ll mbl = -b - (c - 1) / 2;

    // 各範囲の個数を加算する
    ll ans = br - bl + 1 + mbr - mbl + 1;

    // Bが正かつ-Bの右端がBの左端より大きい場合、重複分を引く
    if(0 < b && bl <= mbr) ans -= (mbr - bl + 1);

    // Bが負かつBの右端が-Bの左端より大きい場合、重複分を引く
    if(b <= 0 && mbl <= br) ans -= (br - mbl + 1);

    cout << ans << endl;


    return 0;
}
