#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    if((n % 40) <= 20) cout << n % 40 << endl;
    else cout << 40 - (n % 40) + 1 << endl;

    return 0;
}
