#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    // もっと効率良くできると思うが
    REP(i, 1, n+1){
        if(i < 10){
            cnt += 1;
        }else if(100 <= i && i <= 999){
            cnt += 1;
        }else if(10000 <= i && i <= 99999){
            cnt += 1;
        }
    }
    OP(cnt);
}
