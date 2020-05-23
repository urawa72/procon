#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;
    V<double> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    // 期待値
    V<double> v2(n);
    for(int i = 0; i < n; i++){
        v2[i] = ((v[i] * (v[i] + 1)) / 2) / v[i];
    }

    // 累積和
    V<double> v3(n + 1);
    v3[0] = 0.0;
    for(int i = 0; i < n; i++){
        v3[i + 1] = v3[i] + v2[i];
    }

    // 和の計算
    double ans = 0.0;
    for(int i = 0; i < n - k + 1; i++){
        ans = max(ans, v3[i + k] - v3[i]);
    }
    cout << setprecision(20) << ans << endl;

}
