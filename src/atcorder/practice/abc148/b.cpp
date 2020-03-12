#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    string ans = "";
    rep(i, n){
        ans += s[i];
        ans += t[i];
    }
    OP(ans);
}
