#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

ll GCD(ll a, ll b){
    if(b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    ll a = 100;
    ll b = 256;
    OP(GCD(a, b));
}
