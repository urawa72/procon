#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int z = 0;
    int ab = a + b;
    int ans = a * x + b * y;
    // AB2枚の方が安い場合
    if(ab > c * 2){
        // 大きい方を基準にする
        int m = max(x, y);
        for(int i = m * 2; 0 < i; i-=2){
            z = i / 2;
            // xとyの差分
            int rx = 0;
            int ry = 0;
            if(0 <= x - z){ rx = x - z; }
            if(0 <= y - z){ ry = y - z; }
            int sum = rx * a + ry * b + i * c;
            ans = min(ans, sum);
        }
    }

    // // 以下の4パターンで算出できる
    // int sum1, sum2, sum3, sum4;
    // // cを買う必要がない場合
    // sum1 = a * x + b * y;
    // // xを余分に買うの場合
    // sum2 = a * max(x - y, 0) + 2 * c * y;
    // // yを余分に買う場合
    // sum3 = 2 * c * x + b * max(y - x, 0);
    // // xとyが同じ場合
    // sum4 = 2 * c * max(x, y);
    // ans = min({sum1, sum2, sum3, sum4});
    OP(ans);
}
