#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int r, d, x;
    cin >> r >> d >> x;

    rep(i, 10){
        x = r * x - d;
        OP(x);
    }
}
