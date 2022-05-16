#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main() {
    int n;
    cin >> n;
    map<string, P<int, ll>> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ll t;
        cin >> t;
        if (m[s].second != 0) {
            continue;
        }
        m[s] = make_pair(i + 1, t);
    }

    ll v = 0;
    int ans = n + 1;
    for (auto p : m) {
        if (v < p.second.second) {
            v = p.second.second;
            ans = p.second.first;
        }
    }

    cout << ans << endl;

    return 0;
}
