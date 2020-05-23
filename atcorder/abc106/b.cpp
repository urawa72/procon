#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    REP(i, 1, n + 1){
        if(i % 2 == 0) continue;
        int cnt = 0;
        REP(j, 1, i + 1){
            if(i % j == 0) cnt++;
        }
        if(cnt == 8) ans++;
    }
    OP(ans);
}
