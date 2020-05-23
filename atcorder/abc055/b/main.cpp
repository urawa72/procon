#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

ll MOD = 1e9 + 7;

int main() {
    ll n; cin >> n;
    ll ans = 1;
    for(int i = 1; i <= n; i++){
        ans = ans * i % MOD;
    }
    cout << ans << endl;
}
