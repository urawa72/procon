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
    int sx, sy, gx, gy, t, v;
    cin >> sx >> sy >> gx >> gy >> t >> v;
    int n; cin >> n;
    V<P<int, int> > w(n);
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        w[i] = make_pair(x, y);
    }

    for(int i = 0; i < n; i++){
        double s = sqrt(pow(w[i].first - sx, 2.0) + pow(w[i].second - sy, 2.0));
        double g = sqrt(pow(gx - w[i].first, 2.0) + pow(gy - w[i].second, 2.0));
        if(s + g <= t * v) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
