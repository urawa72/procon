#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n;
    cin >> n;

    string ans = "No";
    REP(i,1,10){
        REP(j,1,10){
            if(i * j == n){
                ans = "Yes";
            }
        }
    }
    OP(ans);
}
