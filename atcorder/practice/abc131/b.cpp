#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, l; cin >> n >> l;

    // 冗長
    // int sum = 0;
    // REP2(i, 1, n) sum += (i + l - 1);
    // int tmp = abs(l);
    // int target = 1;
    // REP2(i, 2, n){
    //     if(abs(i + l - 1) < tmp){
    //         tmp = abs(i + l - 1);
    //         target = i;
    //     };
    // }
    // OP(sum - (target + l - 1));

    // 解答例
    // 必ずL < R
    int L = l; // 一番左
    int R = l + n - 1; // 一番右
    int eat;
    if(R <= 0) eat = R;
    else if(L >= 0) eat = L;
    else eat = 0;
    int ans = (R + L) * (R - L + 1) / 2 - eat;
    OP(ans);
}
