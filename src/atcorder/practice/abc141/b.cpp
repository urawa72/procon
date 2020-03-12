#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    string s; cin >> s;

    string ans = "Yes";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'U' || s[i] == 'D') continue;
        if((i + 1) % 2 == 0 && s[i] == 'L') continue;
        if((i + 1) % 2 != 0 && s[i] == 'R') continue;
        ans = "No";
        break;
    }
    OP(ans);
}
