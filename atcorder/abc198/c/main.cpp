#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    double r, x, y;
    cin >> r >> x >> y;

    double w = sqrt(x * x + y * y);
    // 切り上げる
    int ans = ceil(w / r);
    // w<rの時は遠回りが必要
    if (ans == 1 && w != r) ans++;
    cout << ans << endl;
}
