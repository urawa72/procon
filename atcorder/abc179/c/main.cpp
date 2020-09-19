#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    ll ans = 0;
    for(int i = 1; i < n; i++){
        for(int j = 1; i * j < n; j++){
            ll t = i * j;
            if(0 <= n - t) ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
