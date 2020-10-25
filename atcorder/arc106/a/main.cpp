#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n; cin >> n;

    ll a = 1;
    for(int i = 1; a * 3 <= n; i++){
        a *= 3;
        ll b = 1;
        for(int j = 1; a + b * 5 <= n; j++){
            b *= 5;
            if(a + b == n){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}
