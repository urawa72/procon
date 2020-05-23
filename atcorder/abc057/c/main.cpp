#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int digit(ll n){
    int d = 0;
    while(n > 0){
        n /= 10;
        d++;
    }
    return d;
}

int main() {
    ll n; cin >> n;
    int ans = INT_INF;
    // iはlong longでないとだめ
    for(ll i = 1LL; i * i <= n; i++){
        if(n % i == 0){
            ll j = n / i;
            int d = max(digit(i), digit(j));
            ans = min(ans, d);
        }
    }
    cout << ans << endl;
}
