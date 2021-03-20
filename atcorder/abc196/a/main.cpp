#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;

    int x = max(a, b);
    int y = min(c, d);

    cout << x - y << endl;

    return 0;
}
