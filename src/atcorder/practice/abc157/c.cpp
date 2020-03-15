#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, m; cin >> n >> m;
    int s[m], c[m];
    rep(i, m) cin >> s[i] >> c[i];

    int ans = -1;
    rep(i, 1000){
        // 文字列にした方がチェックしやすい
        string tmp = to_string(i);
        if(tmp.length() != n) continue;
        bool flag = true;
        // s[i]の桁がc[i]じゃなければあてはまらない
        rep(j, m){
            if(tmp[s[j] - 1] - '0' != c[j]) flag = false;
        }
        // 小さい値から判定しているのでminは不要
        if(flag){
            ans = i;
            break;
        }
    }
    OP(ans);
}

