#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    ll a, b, x; cin >> a >> b >> x;

    ll l = 0, r = 1000000001;

    // lambda
    // auto keta = [&](ll c){
    //     int res = 0;
    //     while(c){
    //         c /= 10;
    //         res++;
    //     }
    //     return res;
    // };
    // auto f = [&](ll m){
    //     return a * m + b * keta(m);
    // };

    // 単調増加なので二分探索で中間を求める＝答え
    // lは買える整数、rは買えない整数
    // O(log1e9)
    while(r - l > 1){
        ll m = (l + r) / 2;
        ll keta = to_string(m).size();
        ll sum = a * m + b * keta;
        if(sum <= x) l = m;
        else r = m;
    }
    cout << l << endl;

    return 0;
}
