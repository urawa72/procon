#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n, a, b; cin >> n >> a >> b;

    ll s = n / (a + b);
    ll r = n % (a + b);

    ll sum = s * a;
    if(r < a) sum += r;
    else sum += a;
    cout << sum << endl;

    return 0;
}
