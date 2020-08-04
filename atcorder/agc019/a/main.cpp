#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;

int main() {
    ll q, h, s, d;
    cin >> q >> h >> s >> d;
    ll n; cin >> n;

    if(2 * s <= d){
        // 常に1リットル以下の最安値で買うのが最適
        cout << min(2 * min(2 * q, h), s) * n << endl;
    }else{
        // 2リットルの商と余りに分けて一番安いサイズで買う
        // 商は2リットルサイズの値段の最安値
        // 余りは1リットルサイズの値段の最安値
        cout << (n / 2) * min({8 * q, 4 * h, 2 * s, d}) + (n % 2) * min({4 * q, 2 * h, s}) << endl;
    }


    return 0;
}
