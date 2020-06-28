#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 60


int main() {
    int n, m; cin >> n >> m;
    ll k; cin >> k;
    V<ll> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    V<ll> sa(n + 1, 0), sb(m + 1, 0);
    for(int i = 0; i < n; i++){
        sa[i + 1] = sa[i] + a[i];
    }
    for(int i = 0; i < m; i++){
        sb[i + 1] = sb[i] + b[i];
    }

    ll ans = 0;
    for(int i = 0; i <= n; i++){
        ll sum = sa[i];
        ll sub = k - sum;
        ll cnt = 0;
        if(0 <= sub){
            cnt += i;
            auto ite = upper_bound(ALL(sb), sub);
            ll tmp = ite - sb.begin();
            if(0 < tmp) cnt += tmp - 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}
