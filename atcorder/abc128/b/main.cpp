#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<string, V<P<int, int>>> mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int p;
        cin >> p;
        mp[s].push_back({p, i});
    }

    for (auto p : mp) {
        sort(ALL(p.second), greater<P<int, int>>());
        for (auto a : p.second) {
            cout << a.second + 1 << endl;
        }
    }

    return 0;
}
