#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    ll t; cin >> t;
    V<P<int, int> > ab(n);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        ab[i] = make_pair(a, b);
    }

    // それぞれの和と差分の配列をつくる
    V<ll> s(n);
    ll suma = 0, sumb = 0;
    for(int i = 0; i < n; i++){
        suma += ab[i].first;
        sumb += ab[i].second;
        s[i] = abs(ab[i].first - ab[i].second);
    }

    // 自力で間に合う
    if(suma <= t){
        cout << 0 << endl;
        return 0;
    }
    // どうやっても間に合わない
    if(t < sumb){
        cout << -1 << endl;
        return 0;
    }

    // 差分の配列を大きい樹にソートし
    // aの総和から順番に引いて間に合ったら終了
    sort(ALL(s), greater<ll>());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        suma -= s[i];
        ans++;
        if(suma <= t) break;
    }
    cout << ans << endl;

    return 0;
}
