#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

void dfs(int n, int m, int l, V<int> v) {
    if (v.size() == n) {
        for (int x : v) {
            cout << x << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = l; i <= m; i++) {
        v.push_back(i);
        dfs(n, m, i + 1, v);
        v.pop_back();
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    V<int> v;
    dfs(n, m, 1, v);

    return 0;
}
