#include <bits/stdc++.h>
#include <set>
#include <utility>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll n, k; cin >> n >> k;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // いもす法
    for(int ki = 0; ki < k; ki++){
        V<ll> b(n + 1);
        for(int i = 0; i < n; i++){
            // 加算する左端と右端を特定
            ll l = max(0LL, i - a[i]);
            ll r = min(i + a[i] + 1, n);
            b[l]++;
            b[r]--;
        }
        // 累積和
        for(int i = 0; i < n; i++) b[i + 1] += b[i];
        // 末尾は取り除く
        b.pop_back();
        // aとbが一致したら収束したので終了
        if(a == b) break;
        // そうでなければいもす法の結果をaに
        a = b;
    }

    for(int i = 0; i < n; i++){
        if(i != n - 1) cout << a[i] << " ";
        else cout << a[i] << endl;
    }

    return 0;
}
