#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = -1;
    for(int i = 0; i <= 1000; i++){
        if(floor(i*0.08) == a && floor(i*0.1) == b){
            ans = i;
            break;
        }
    }
    OP(ans);
}
