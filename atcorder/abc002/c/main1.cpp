#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    xb -= xa;
    yb -= ya;
    xc -= xa;
    yc -= ya;

    double a = abs(xb * yc - yb * xc);
    cout << setprecision(12) << a / 2.0 << endl;
}
