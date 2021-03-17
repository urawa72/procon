#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll K; cin >> K;

    ll ans = 0;
    for(ll i = 1; i <= K; i++){
        for(ll j = 1; i * j <= K; j++){
            ans += (K / (i * j));
        }
    }
    cout << ans << endl;

    return 0;
}
