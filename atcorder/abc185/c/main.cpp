#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int l; cin >> l;

    ll ans = 1;
    ll cnt = 1;
    V<ll> v;
    for(int i = l - 1; i >= l - 11; i--){
        ans *= i;
        ans /= cnt;
        cnt++;
    }
    cout << ans << endl;


    return 0;
}
