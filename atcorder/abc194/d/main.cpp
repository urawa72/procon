#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;

    // 確率pで成功する試行を成功するまで行う時の試行回数の期待値は1/p（pの逆数）
    // 頂点1 → 頂点2 について、(n-1)/nの確率で遷移できる
    // 遷移が成功するたびに(n-2)/n, (n-3)/n, (n-4)/n ...となる
    double ans = 0;
    for (int i = 1; i < n; i++) {
        ans += 1.0 * n / (n - i);
    }
    printf("%.10f\n", ans);

    return 0;
}
