#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<int> x(m);
    for(int i = 0; i < m; i++){
        cin >> x[i];
    }
    sort(all(x));
    // 座標間の差を算出
    vector<int> y(m - 1);
    for(int i = 0; i < m - 1; i++){
        y[i] = x[i + 1] - x[i];
    }
    sort(all(y));
    // 小さい差をm - n分足す
    int ans = 0;
    for(int i = 0; i < m - n; i++){
        ans += y[i];
    }
    if(m == 1) cout << 0 << endl;
    else cout << ans << endl;
}
