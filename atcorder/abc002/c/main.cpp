#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if(x1 == 0 && x2 == 0){
        cout << setprecision(10) << abs(x2 * y3 - y2 * x3) / 2.0 << endl;
    }else{
        cout << setprecision(10) << abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.0 << endl;
    }
}
