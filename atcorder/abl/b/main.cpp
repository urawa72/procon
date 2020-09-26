#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;

    if(a <= c && c <= b) cout << "Yes" << endl;
    else if(c <= a && a <= d) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
