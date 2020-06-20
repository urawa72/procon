#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int a, b; cin >> a >> b;

    // int cnt = 0;
    // if(b == 1){
    //     OP(cnt);
    // }else{
    //     while(0 < b){
    //         b -= a;
    //         cnt++;
    //         if(b == 0) break;
    //         b++;
    //     }
    //     OP(cnt);
    // }

    // もっと単純にできる
    int ans = 0;
    int outlet = 1;
    while(outlet < b){
        outlet--;
        outlet += a;
        ans++;
    }
    OP(ans);

}
