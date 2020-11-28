#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n; cin >> n;

    ll t = 1;
    while(1){
        if(t * (t + 1) / 2 <= n + 1){
            t++;
        }else{
            break;
        }
    }
    cout << n - t + 2 << endl;

    return 0;
}
