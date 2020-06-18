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
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // 頂点をx=0と置くと芋づる式に各頂点をxで表せ、
    // 最終的にx = a5 - a4 + a3 - a2 + a1 - x
    // xを移行して2xとする 偶数の時は引き算
    ll x2 = 0;
    for(int i = 0; i < n; i++){
        if(i % 2) x2 -= a[i];
        else x2 += a[i];
    }

    V<ll> ans(n);
    // x = 2x / 2;
    ans[0] = x2 / 2;
    // 漸化式で求める
    for(int i = 0; i < n - 1; i++){
        ans[i + 1] = a[i] - ans[i];
    }

    for(int i = 0; i < n; i++){
        if(i != n - 1) cout << ans[i] * 2 << " ";
        else cout << ans[i] * 2 << endl;
    }


    return 0;
}
