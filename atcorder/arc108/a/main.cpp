#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll s, p; cin >> s >> p;

    for(ll n = 1; n <= 1000000; n++){
        if(p % n == 0){
            ll m = p / n;
            if(n + m == s){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
