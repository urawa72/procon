#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    int ans = 0;
    rep(i,s.size()){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
            cnt = 1;
            REP(j,i+1,s.size()){
                if(s[j] == 'A' || s[j] == 'C' || s[j] == 'G' || s[j] == 'T'){
                    cnt += 1;
                }else{
                    break;
                }
            }
            ans = max(ans, cnt);
        }
    }
    OP(ans);
}
