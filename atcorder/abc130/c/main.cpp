#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    ld w, h, x, y; cin >> w >> h >> x >> y;

    ld s = w * h / 2.0;
    int n = (x * 2 == w && y * 2 == h) ? 1 : 0;
    printf("%.10Lf %d\n", s, n);

    return 0;
}
