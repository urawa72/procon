#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    long h, w; cin >> h >> w;

    long ans = 0;
    long hh, ww = 0;
    if(h == 1 || w == 1){
        ans = 1;
    }else{
        if(h % 2 == 0){
            hh = h / 2;
        }else{
            hh = h / 2 + 1;
            ww = w / 2;
        }
        ans = hh * w - ww;
    }
    OP(ans);
}



