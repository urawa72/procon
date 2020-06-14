#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int h, w; cin >> h >> w;

    cout << h * (w - 1) + w * (h - 1) << endl;

    return 0;
}
