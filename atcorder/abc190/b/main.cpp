#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n, s, d; cin >> n >> s >> d;

    for(int i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        if(x < s && d < y){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
