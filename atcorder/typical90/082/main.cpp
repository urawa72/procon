#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const ll MOD = 1e9 + 7;

int main() {
    long long L, R;
    cin >> L >> R;

    long long now = 1;
    long long ans = 0;
    for (int i = 1; i <= 18; i++) {
        long long nxt = now * 10 - 1;
        long long l = max(L, now), r = min(R, nxt);
        if (l <= r) {
            // mからnの和 S = (n - m + 1) * (m + n) / 2
            // (n - m + 1): m + n の個数
            long long a = l + r, b = r - l + 1;
            // 割り切れる方を割る
            if (a % 2 == 0)
                a /= 2;
            else
                b /= 2;
            // lからrまでの和に桁数を乗じる
            ans += a % MOD * (b % MOD) % MOD * i % MOD;
            ans %= MOD;
        }
        now = nxt + 1;
    }
    // コーナーケース
    if (R == 1000000000000000000) {
        ans += R % MOD * 19 % MOD;
        ans %= MOD;
    }
    cout << ans << endl;
}
