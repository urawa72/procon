#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, q; cin >> n >> q;
    vector<int> v(n + 1, 0);
    for(int i = 0; i < q; i++){
        int l, r, t; cin >> l >> r >> t;
        for(int j = l; j <= r; j++){
            v[j] = t;
        }
    }
    for(int i = 1; i <= n; i++) cout << v[i] << endl;
}
