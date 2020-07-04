#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int h, n;
    cin >> h >> n;

    string ans = "No";
    rep(i, n){
        int a;
        cin >> a;
        h -= a;
        if(h <= 0){
            ans = "Yes";
            break;
        }
    }
    OP(ans);
}
