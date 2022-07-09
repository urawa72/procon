#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main() {
    int n, k;
    cin >> n >> k;
    V<P<int, int>> vp(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vp[i] = make_pair(a, i);
    }
    int m = max_element(ALL(vp))->first;

    map<int, int> mb;
    for (int i = 0; i < k; i++) {
        int b;
        cin >> b;
        mb[b - 1] += 1;
    }

    bool ok = false;
    for (int i = 0; i < n; i++) {
        if (vp[i].first == m && mb[vp[i].second]) {
            ok = true;
        }
    }
    
    cout << (ok ? "Yes" : "No") << endl;

    return 0;
}
