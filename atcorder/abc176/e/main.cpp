#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int h, w, m;
    cin >> h >> w >> m;
    V<int> row(300010, 0), col(300010, 0);
    map<P<ll, ll>, int> mp;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        row[x]++;
        col[y]++;
        mp[{x, y}]++;
    }

    int mr = 0, mc = 0;
    for (int i = 1; i < 300010; i++) {
        mr = max(mr, row[i]);
        mc = max(mc, col[i]);
    }

    V<int> r, c;
    for (int i = 1; i < 300010; i++) {
        if (mr == row[i]) r.push_back(i);
        if (mc == col[i]) c.push_back(i);
    }

    int ans = mr + mc - 1;
    for (auto rr : r) {
        for (auto cc : c) {
            if (!mp[{rr, cc}]) {
                cout << ans + 1 << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
