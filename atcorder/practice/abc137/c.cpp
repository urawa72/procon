#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    ll n; cin >> n;

    map<string, ll> ma;

    // ソートして同じ文字列をmapで格納
    rep(i, n){
        string s; cin >> s;
        sort(s.begin(), s.end());
        ma[s]++;
    }

    // nC2の選び方で求まる
    ll ans = 0;
    for(auto  m : ma){
        if(m.second == 1) continue;
        ll cnt = m.second;
        ans += cnt * (cnt - 1) / 2;
    }
    OP(ans);
}
