#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

V<int> ans;
int n, x, y, cnt;
int main() {
    cin >> n >> x >> y;

    // 2点間の距離の最小値をカウント
    ans.resize(n);
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(i == j) continue;
            // x, yを経由する場合
            int a = abs(x - i) + abs(j - y) + 1;
            // しない場合
            int b = abs(i - j);
            int d = min(a, b);
            ans[d]++;
        }
    }
    for(int i = 1; i < n; i++){
        cout << ans[i] << endl;
    }
}
