#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];
    ll odd_min = 1000000001;
    ll all_min = 1000000001;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) odd_min = min(c[i], odd_min);
        all_min = min(c[i], all_min);
    }

    V<ll> c2(n);
    ll odd_sum = 0, all_sum = 0;
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        if(x == 1){
            int y, z; cin >> y >> z;
            y--;
            ll tmp = c[y];
            if(y % 2 == 0) tmp -= odd_sum;
            tmp -= all_sum;
            if(0 <= tmp - z){
                tmp -= z;
                c[y] -= z;
                c2[y] += z;
                all_min = min(tmp, all_min);
                if(y % 2 == 0) odd_min = min(tmp, odd_min);
            }
        }
        if(x == 2){
            int z; cin >> z;
            if(0 <= odd_min - z){
                odd_min -= z;
                odd_sum += z;
                all_min = min(odd_min, all_min);
            }
        }
        if(x == 3){
            int z; cin >> z;
            if(0 <= all_min - z){
                all_min -= z;
                odd_min -= z;
                all_sum += z;
                all_min = min(odd_min, all_min);
            }
        }
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += c2[i];
    }
    ans += ((n + 1) / 2) * odd_sum;
    ans += n * all_sum;
    cout << ans << endl;


    return 0;
}
