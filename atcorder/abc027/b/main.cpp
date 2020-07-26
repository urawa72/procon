#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    V<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    // 割り切れなければ均等に配置できないので終了
    if(sum % n != 0){
        cout << -1 << endl;
        return 0;
    }

    // 累積和
    V<int> sums(n + 1);
    for(int i = 0; i < n; i++){
        sums[i + 1] = sums[i] + a[i];
    }

    // 一つの島に配置する人数
    int m = sum / n;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        // i番目の島には平均*iの人数が必要
        // 過不足あれば橋を架ける対象の島
        if(m * i < sums[i] || sums[i] < m * i) ans++;
    }
    cout << ans << endl;

    return 0;
}
