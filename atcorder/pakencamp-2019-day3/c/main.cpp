#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, k; cin >> n >> k;
    V<V<ll> > a(n, V<ll>(k));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++) cin >> a[i][j];
    }

    ll ans = 0;
    for(int i = 0; i < k - 1; i++){
        for(int j = i + 1; j < k; j++){
            ll tmp = 0;
            for(int l = 0; l < n; l++){
                tmp += max(a[l][i], a[l][j]);
            }
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;


    return 0;
}
