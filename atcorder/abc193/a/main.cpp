#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    double a, b; cin >> a >> b;
    cout << setprecision(10) << (1 - b / a) * 100 << endl;

    return 0;
}
