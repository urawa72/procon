#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n; cin >> n;

    ll ans = 0;
    for(int i = 1; i <= 999999; i++){
        string t = to_string(i) + to_string(i);
        ll x = stoll(t);
        if(x <= n) ans++;
    }

    cout << ans << endl;

    return 0;
}
