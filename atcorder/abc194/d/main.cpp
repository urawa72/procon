#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    double n; cin >> n;

    double ans = 1;
    for(double i = 2; i <= n; i++){
        ans += (double)(1 / i);

    }
    cout << setprecision(10) << n * ans - 1 << endl;


    return 0;
}
