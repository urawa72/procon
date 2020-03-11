#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    rep(i,n){
        if(s[i] == 'A'){
            if(s[i+1] == 'B' && s[i+2] == 'C'){
                ans += 1;
            }
        }
    }
    OP(ans);
}
