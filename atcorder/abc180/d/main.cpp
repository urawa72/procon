#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll x, y, a, b; cin >> x >> y >> a >> b;
    ll ans = 0;

    // 貪欲法
    while(1){
        if((double)x * a <= 2e18 && x * a < y && x * a <= x + b){
            x *= a;
            ans++;
        }else{
            break;
        }
    }

    cout << ans + (y - 1 - x) / b << endl;

    return 0;
}
