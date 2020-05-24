#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    ll n; cin >> n;

    ll ans = n - 1;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            ll tmp = i + (n / i) - 2;
            ans = min(ans, tmp);
        }
    }
    OP(ans);
}
