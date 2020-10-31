#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    ll s = 0;
    ll t = 0;
    ll u = 0;
    for(int i = 0; i < n; i++){
        ll tmp; cin >> tmp;
        s += abs(tmp);
        t += tmp * tmp;
        u = max(u, abs(tmp));
    }

    cout << s << endl;
    cout << setprecision(15) << sqrt(t) << endl;
    cout << u << endl;

    return 0;
}
