#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    // 奇数だったら老人1人
    // それ以外は大人と赤ちゃんで成立するので0人で良い
    int c = 0;
    if (m & 1) {
        m -= 3;
        n--;
        c = 1;
    }
    for (int i = 0; i <= n; i++) {
        if (m - i * 4 - (n - i) * 2 == 0) {
            cout << n - i << " " << c << " " << i << endl;
            return 0;
        }
    }
    cout << "-1 -1 -1" << endl;

    return 0;
}
