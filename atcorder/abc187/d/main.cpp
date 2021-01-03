#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        v[i] = 2 * a + b;
        sum -= a;
    }

    sort(ALL(v), greater<ll>());
    for(int i = 0; i < n; i++){
        sum += v[i];
        if(0 < sum){
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
