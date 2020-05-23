#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int a, b;
    cin >> a >> b;

    string sa, sb;
    rep(i, a) sa += to_string(b);
    rep(i, b) sb += to_string(a);

    // 文字列の辞書順比較
    if(sa < sb){
        OP(sa);
    }else{
        OP(sb);
    }
}
