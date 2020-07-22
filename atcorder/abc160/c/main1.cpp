#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
typedef long long ll;
typedef long long int lli;

int main() {
    ll k, n; cin >> k >> n;
    vector<ll> a(n); rep(i, n) cin >> a[i];

    lli ans = k;
    rep(i, n){
        lli tmp = 0;
        if(i == 0){
           tmp = abs(a[n - 1] - a[i]);
        }else{
           tmp = abs((a[i - 1] + k) - a[i]);
        }
        ans = min(ans, tmp);
    }
    OP(ans);
}
