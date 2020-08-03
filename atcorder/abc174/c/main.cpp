#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int k; cin >> k;
    int x = 7 % k;
    for(int i = 1; i <= k; i++){
        if(x == 0) {
            cout << i << endl;
            return 0;
        }
        x = (x * 10 + 7) % k;
    }
    cout << -1 << endl;

    return 0;
}
