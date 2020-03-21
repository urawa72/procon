#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    rep(i, n){
        if(s[i] != s[i + 1]) ans++;
    }
    OP(ans);
}
