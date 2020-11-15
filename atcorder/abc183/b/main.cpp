#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    double sx, sy, gx, gy; cin >> sx >> sy >> gx >> gy;

    double x = gx - sx;
    double y = sy + gy;
    cout << setprecision(12) << x / y * sy + sx << endl;

    return 0;
}
