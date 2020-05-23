#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    string s;
    cin >> s;

    string origin = s;
    reverse(s.begin(), s.end());

    int ans = 0;
    rep(i, s.length()){
        if(origin[i] == s[i]) continue;
        ans++;
    }
    if(ans > 0) ans /= 2;
    OP(ans);
}
