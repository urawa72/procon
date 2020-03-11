#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int ans = 0;
    int cnt = 0;
    int c = min(a, b);
    // 大きいものからk番目
    for(int i = c; i > 0; i--){
        if(a % i == 0 && b % i == 0){
            cnt++;
            if(cnt == k){
                ans = i;
                break;
            }
        }
    }
    OP(ans);
}
