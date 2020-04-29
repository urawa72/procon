#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int L; cin >> L;
    printf("%.12f\n", (double)L * L * L / 27);
}
