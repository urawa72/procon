#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

// 素数判定
bool is_prime(ll n){
    if(n == 1) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ll n; cin >> n;
    ll m = n;

    bool p = false;
    if(is_prime(n)) p = true;

    bool q = false;
    ll n1 = n % 10;
    ll sum = 0;
    while(0 < m){
        sum += m % 10;
        m /= 10;
    }
    if(n != 1 && !p && (n1 & 1 && n1 != 5) && sum % 3 != 0) q = true;

    if(p || q) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;


    return 0;
}
