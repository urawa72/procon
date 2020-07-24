#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long double ld;
typedef long long ll;
const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {
    int h, w, n; cin >> h >> w >> n;

    cout << (n + max(h, w) - 1) / max(h, w) << endl;

    return 0;
}
