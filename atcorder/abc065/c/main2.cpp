#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
const ll MOD = 1e9 + 7;

int main() {
    ll n, m; cin >> n >> m;
    if(abs(n - m) > 1){
        cout << 0 << endl;
        return 0;
    }
    ll ans = 1;
    if(n == m) ans = 2;
    // 組み合わせ自体は順列の簡単な計算（n!m!）
    // 階乗計算は桁数が収まらないので掛け算の都度余を取る
    for(int i = 1; i <= n; i++){
        ans = ans * i % MOD;
    }
    for(int i = 1; i <= m; i++){
        ans = ans * i % MOD;
    }
    cout << ans << endl;
}
