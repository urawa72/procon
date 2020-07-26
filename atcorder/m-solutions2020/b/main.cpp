#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD =  1000000007;
const ll INF = 1LL << 60;


int main() {
    int a, b, c; cin >> a >> b >> c;
    int k; cin >> k;

    while(b <= a){
        b *= 2;
        k--;
    }
    while(c <= b){
        c *= 2;
        k--;
    }
    if(0 <= k && a < b && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
