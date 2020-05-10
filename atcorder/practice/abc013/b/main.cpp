#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int a, b; cin >> a >> b;

    int c = INT_INF, d = INT_INF;
    c = abs(a - b);
    if(a > b) d = abs((b + 10) - a);
    else d = abs((a + 10) - b);
    cout << min(c, d) << endl;
}
