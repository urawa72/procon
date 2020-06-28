#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define IINF INT_MAX
#define INF 1LL << 30

int main() {
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    const int MOD = 1e9 + 7;
    for(int i = 0; i < 60; i++){
        ll x = 0;
        for(int j = 0; j < n; j++){
            if(a[j] & 1LL << i) x++;
        }
        // i桁目が1になる組み合わせは1の数と0の数の組み合わせ
        ll now = x * (n - x) % MOD;
        // 2のi乗をかけてi桁目の加算する値を求める
        for(int j = 0; j < i; j++){
            now = now * 2 % MOD;
        }
        ans += now;
        ans %= MOD;
    }
    cout << ans << endl;

    return 0;
}
