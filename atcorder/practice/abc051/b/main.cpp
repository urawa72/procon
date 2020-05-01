#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll K, S; cin >> K >> S;

    ll ans = 0;
    for(ll i = 0; i <= K; i++){
        for(ll j = 0; j <= K; j++){
            ll sum = S - i - j;
            if(0 <= sum && sum <= K) ans++;
        }
    }
    cout << ans << endl;
}
