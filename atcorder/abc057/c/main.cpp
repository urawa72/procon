#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll ans = to_string(n).size();
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            ll x = to_string(n / i).size();
            ll y = to_string(i).size();
            ans = min(ans, max(x, y));
        }
    }
    cout << ans << endl;
}
