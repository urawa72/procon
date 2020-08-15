#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    V<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(ALL(v));
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] == v[j]) continue;
            for(int k = j + 1; k < n; k++){
                if(v[j] == v[k]) continue;
                if(v[i] + v[j] <= v[k] || v[i] + v[k] <= v[j] || v[j] + v[k] <= v[i]) continue;
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
