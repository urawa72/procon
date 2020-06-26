#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    // string s; cin >> s;
    //
    // string ans = "";
    // rep(i, s.size()){
    //     char tmp = s[i] + n;
    //     if(tmp - '0' > 42){
    //         int r = 43 - (s[i] - '0');
    //         tmp = 'A' + (n - r);
    //     }
    //     ans += tmp;
    // }
    // OP(ans);

    char s[10010]; cin >> s;
    rep(i, strlen(s)){
        int x = s[i] - 'A';
        x = (x + n) % 26;
        putchar('A' + x);
    }
    putchar('\n');
}
