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
    ll a, b, c; cin >> a >> b >> c;
    ll k; cin >> k;

    ll sum = 0;
    if(a <= k){
        sum += a;
        k -= a;
    }else{
        cout << k << endl;
        return 0;
    }
    if(b <= k){
        k -= b;
    }else{
        cout << sum << endl;
        return 0;
    }
    if(c <= k){
        sum -= c;
    }else{
        cout << sum - k << endl;
        return 0;
    }
    cout << sum << endl;
}
