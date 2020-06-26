#include <bits/stdc++.h>
#include <string>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

ll MAX = 1000000000;

int main() {
    ll a, b, x; cin >> a >> b >> x;

    ll l = 0;
    ll r = x / a;
    ll m = 0;
    ll ans = 0;
    while(l <= r){
        m = l + (r - l) / 2;
        ll d = to_string(m).length();
        ll tmp = a * m + b * d;
        if(tmp <= x){
            l = m + 1;
            ans = m;
        }else{
            r = m - 1;
        }
    }
    if(MAX < ans){
        OP(MAX)
    }else{
        OP(ans);
    }
}
