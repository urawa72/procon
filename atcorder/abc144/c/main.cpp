#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    ll n; cin >> n;

    ll ans = INF;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            ll sum = i + n / i - 2;
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;

    return 0;
}
