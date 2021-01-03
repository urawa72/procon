#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b; cin >> a >> b;

    int as = 0, bs = 0;
    while(0 < a){
        as += (a % 10);
        a /= 10;
    }
    while(0 < b){
        bs += (b % 10);
        b /= 10;
    }

    cout << max(as, bs) << endl;

    return 0;
}
