#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    ll n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // O(MlogN)
    V<ll> memo(1000005, 0);
    for(int i = 0; i < n; i++){
        // 重複を考慮
        // 倍数は見る必要ない
        if(memo[a[i]] != 0){
            memo[a[i]] = 2;
            continue;
        }
        // 約数をカウント
        for(int j = a[i]; j < 1000001; j+=a[i]){
            memo[j]++;
        }
    }

    // 1は自分自身だけ
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(memo[a[i]] == 1) ans++;
    }
    cout << ans << endl;

    return 0;
}
