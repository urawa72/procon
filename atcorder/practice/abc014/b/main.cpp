#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;

int main() {
    ll n, x; cin >> n >> x;
    V<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // bitsetのtest関数でもOK
    // bitset<20> bit(x);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        // それぞれの桁に1が立っているか
        if(x & (1 << i)) sum += v[i];
        // if(bit.test(i)) sum += v[i];
    }
    cout << sum << endl;
}
