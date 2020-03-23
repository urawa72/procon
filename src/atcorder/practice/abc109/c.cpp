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
    int N; cin >> N;
    ll X; cin >> X;
    ll res = 0;
    rep(i, N){
        ll x; cin >> x;
        res = GCD(res, abs(x - X));
    }
    OP(res);
}
