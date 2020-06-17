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
    ll n, k; cin >> n >> k;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // しゃくとり法
    ll ans = 0, sum = 0;
    int r = 0;
    for(int l = 0; l < n; l++){
        // 総和がkより数列大きくなるまでrを動かして加算
        while(sum < k){
            // rがnまで到達したら終了
            if(r == n) break;
            else{
                // 末尾を加算
                sum += a[r];
                r++;
            }
        }
        // 総和がkに満たなかったら該当する数列はなし
        if(sum < k) break;
        // rからnまでの個数+1
        ans += n - r + 1;
        // 先頭を減算
        sum -= a[l];
    }
    cout << ans << endl;
}
