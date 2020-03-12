#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    long a, b, k;
    cin >> a >> b >> k;

    long ak = a - k;
    if(ak < 0){
        long bk = b + ak;
        if(bk < 0){
            cout << 0 << " " << 0 << endl;
        }else{
            cout << 0 << " " << bk << endl;
        }
    }else{
        cout << ak << " " << b << endl;
    }
}
