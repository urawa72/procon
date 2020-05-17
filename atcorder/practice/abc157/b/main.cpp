#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int a[9];
    rep(i, 9) cin >> a[i];
    int n;
    cin >> n;
    rep(i, n){
        int b;
        cin >> b;
        rep(i, 9){
            if(a[i] == b){
                a[i] = 0;
            }
        }
    }

    // 1次元配列でビンゴになる全パターン列挙
    // 本当は2次元配列で縦横はループで判定するのが良い
    string ans = "No";
    if(a[0] == 0 && a[1] == 0 && a[2] == 0) ans = "Yes";
    if(a[3] == 0 && a[4] == 0 && a[5] == 0) ans = "Yes";
    if(a[6] == 0 && a[7] == 0 && a[8] == 0) ans = "Yes";
    if(a[0] == 0 && a[3] == 0 && a[6] == 0) ans = "Yes";
    if(a[1] == 0 && a[4] == 0 && a[7] == 0) ans = "Yes";
    if(a[2] == 0 && a[5] == 0 && a[8] == 0) ans = "Yes";
    if(a[0] == 0 && a[4] == 0 && a[8] == 0) ans = "Yes";
    if(a[2] == 0 && a[4] == 0 && a[6] == 0) ans = "Yes";
    OP(ans);
}
