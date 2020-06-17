#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, x; cin >> n >> x;

    int sum = 0;
    int cnt = 0;
    rep(i, n){
        int l; cin >> l;
        sum += l;
        if(sum <= x) cnt++;
    }
    OP(cnt + 1);
}
