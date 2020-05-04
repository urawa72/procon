#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ll x; cin >> x;

    for(int i = 0; i <= 120; i++){
        ll w = pow(i, 5);
        for(int j = 0; j <= 120; j++){
            ll t = pow(j, 5);
            if(x == w - t){
                cout << i << " " << j << endl;
                return 0;
            }
            if(x == w + t){
                cout << i << " " << j * -1 << endl;
                return 0;
            }
        }
    }
}
