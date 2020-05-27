#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    V<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    if(sum % n != 0){
        cout << -1 << endl;
        return 0;
    }

    V<int> w(n + 1);
    w[0] = 0;
    for(int i = 0; i < n; i++){
        w[i + 1] = w[i] + v[i];
    }

    // 島iの時点で平均*i番目までの人数いなければ橋が必要
    int ans = 0, b = sum / n;
    for(int i = 1; i <= n; i++){
        if(w[i] <= b * i && b * (n - i) == (w[n] - w[i])) continue;
        ans++;
    }
    cout << ans << endl;
}
