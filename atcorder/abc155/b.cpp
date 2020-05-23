#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n;
    cin >> n;

    bool flag = true;
    rep(i, n){
        int a;
        cin >> a;
        if(a % 2 == 0){
            if(a % 3 != 0 and a % 5 != 0){
                flag = false;
                break;
            }
        }
    }
    string ans;
    ans = flag ? "APPROVED" : "DENIED";
    OP(ans);
}
