#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= c && c < b)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
