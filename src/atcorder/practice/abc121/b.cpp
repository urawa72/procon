#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
typedef long long ll;

int main() {
    ll n, m, c;
    cin >> n >> m >> c;
    vector<ll> b(m);
    rep(i, m) cin >> b[i];

    ll ans = 0;
    rep(i, n){
        ll sum = 0;
        rep(j, m){
            ll a; cin >> a;
            sum += a * b[j];
        }
        if(sum + c > 0) ans++;
    }
    OP(ans);
}
