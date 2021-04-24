#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;

    if (n == 1)
        cout << 0 << endl;
    else if (n == 2)
        cout << 1 << endl;
    else if (n % 2 == 0)
        cout << n / 2 * 2 - 1 << endl;
    else
        cout << n / 2 * 2 << endl;

    return 0;
}
