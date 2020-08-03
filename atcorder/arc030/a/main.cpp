#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9 + 7;

int main() {
    int n, k;
    cin >> n >> k;

    int m = n / 2;
    if (k <= m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
