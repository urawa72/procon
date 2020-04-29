#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int x; cin >> x;

    int ans = 0;
    for(int i = x; i <= 1000000; i++){
        bool flag = true;
        for(int j = 2; j * j < i; j++){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            ans = i;
            break;
        }
    }
    OP(ans);
}
