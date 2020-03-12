#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    int d[n];
    rep(i, n) cin >> d[i];

    int sum = 0;
    rep(i, n){
        REP(j, i + 1, n){
            sum += d[i] * d[j];
        }
    }
    OP(sum);
}
