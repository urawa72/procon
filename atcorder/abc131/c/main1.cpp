#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

ll GCD(ll a, ll b) {
    if(b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll l = 0;
    if(c < d){
        l = d / GCD(d, c) * c;
    }else{
        l = c / GCD(c, d) * d;
    }
    ll ac = (a - 1) / c;
    ll ad = (a - 1) / d;
    ll bc = b / c;
    ll bd = b / d;
    ll al = (a - 1) / l;
    ll bl = b / l;

    ll t = b - a + 1;
    ll ans = t - ((bc - ac) + (bd - ad)) + (bl - al);
    if(0 < ans){
        OP(ans);
    }else{
        OP(0);
    }
}
