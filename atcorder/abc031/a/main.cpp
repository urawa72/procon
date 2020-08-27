#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, d; cin >> a >> d;
    cout << max((a + 1) * d, a * (d + 1)) << endl;

    return 0;
}
