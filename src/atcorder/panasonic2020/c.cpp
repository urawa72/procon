#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

typedef long long ll;

int main() {
    ll a, b, c; cin >> a >> b >> c;

    // 以下だと誤差でWA
    // if(sqrt(a) + sqrt(b) < sqrt(c)){
    //     OP("Yes");
    // }else{
    //     OP("No");
    // }

    // 整数で処理するために両辺を2乗して移項
    ll d = c - a - b;
    if(d > 0 && 4 * a * b < d * d){
        OP("Yes");
    }else{
        OP("No");
    }

    // long double とeps
    // なぜ10の-14乗でうまくいくか
    // long double a, b, c; cin >> a >> b >> c;
    // long double eps = 1.0e-14;
    // if(sqrt(a) + sqrt(b) + eps < sqrt(c)){
    //     OP("Yes");
    // }else{
    //     OP("No");
    // }
}

// 誤差考慮する入力
// 249999999 250000000 999999998
