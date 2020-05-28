#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, d; cin >> n >> d;

    int kanshi = d * 2 + 1;
    int ans = n / kanshi;
    // 切り上げのスマートな書き方
    // a / bの切り上げはa + b - 1 / b
    // int ans = (n + d * 2) / (d * 2 + 1);
    if(n % kanshi == 0){
        OP(ans);
    }else{
        OP(ans + 1);
    }
}
