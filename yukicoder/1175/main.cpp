#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    double x = (c * e - b * f) / (a * e - b * d);
    double y = (c * d - a * f) / (b * d - a * e);
    cout << setprecision(16) << x << " " << y << endl;

    return 0;
}
