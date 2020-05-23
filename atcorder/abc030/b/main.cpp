#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    // 1〜12時に変換
    if(12 < n) n -= 12;
    // 短針の1分あたりの角度は1時間あたり30度なので30/60
    double nd = n * 30 + m * 0.5;
    // 長針は360/60
    double md = m * 6;
    // 差分
    double ans = abs(md - nd);
    // なす角の小さい方を判定
    if(360 - ans < ans) cout << 360 - ans << endl;
    else cout << ans << endl;
}
