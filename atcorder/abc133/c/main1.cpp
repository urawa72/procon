#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

ll mod(ll l, ll r){
    ll ans = 2019;
    for(ll i = l; i < r; i++){
        for(ll j = l + 1; j <= r; j++){
            ans = min(ans, (i * j) % 2019);
            if(ans == 0) return ans;
        }
    }
    return ans;
}

int main() {
    ll l, r; cin >> l >> r;
    OP(mod(l, r));
}
