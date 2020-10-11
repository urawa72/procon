#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll sum = a + b + c + d;

    bool f = false;
    if(a == sum - a) f = true;
    if(b == sum - b) f = true;
    if(c == sum - c) f = true;
    if(d == sum - d) f = true;
    if(a + b == sum - a - b) f = true;
    if(a + c == sum - a - c) f = true;
    if(a + d == sum - a - d) f = true;
    if(b + c == sum - b - c) f = true;
    if(b + d == sum - b - d) f = true;
    if(c + d == sum - c - d) f = true;
    if(a + b + c == sum - a - b - c) f = true;
    if(a + b + d == sum - a - b - d) f = true;
    if(a + c + d == sum - a - c - d) f = true;
    if(b + c + d == sum - b - c - d) f = true;

    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
