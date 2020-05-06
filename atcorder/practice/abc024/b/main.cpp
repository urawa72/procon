#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n, t; cin >> n >> t;
    ll x; cin >> x;
    ll prev = x;
    ll ans = t;
    for(int i = 1; i < n; i++){
        ll a; cin >> a;
        if(prev + t < a){
            ans += t;
        }else{
            ans += (a - prev);
        }
        prev = a;
    }
    cout << ans << endl;
}
