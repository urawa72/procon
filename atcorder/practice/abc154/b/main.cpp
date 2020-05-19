#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    string s;
    cin >> s;

    int l = s.length();
    string ans = "";
    rep(i, l){
        ans += 'x';
    }
    OP(ans);
}
