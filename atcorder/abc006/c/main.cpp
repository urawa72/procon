#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

int main() {
    int n, m; cin >> n >> m;

    // 鶴亀算
    // 大人をループで
    for(int a = 0; a <= n; a++){
        int c = m - 2 * a - 3 * (n - a); // 赤ちゃん
        int b = n - a - c; // 老人
        if(0 <= c && 0 <= b){
            cout << a << " " << b << " " << c << endl;
            return 0;
        }
    }
    cout << "-1 -1 -1" << endl;

}
