#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
typedef long long ll;

int main() {
    ll w, h, x, y;
    cin >> w >> h >> x >> y;
    // 中心を通る直線で半分にするのが小さい方の面積の最大値
    // x, yが中心と同じなら複数
    // それ以外は中心と(x, y)を通る直線だけ
    cout << setprecision(10) << w * h / 2.0 << " ";
    if(x * 2 == w && y * 2 == h) cout << 1 << endl;
    else cout << 0 << endl;
}


