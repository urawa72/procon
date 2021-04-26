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
    ll k; cin >> k;

    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0, sum = 0;
    int r = 0;
    for(int l = 0; l < n; l++){
        while(r < n && sum + a[r] < k){
            sum += a[r];
            r++;
        }
        ans += (r - l);
        sum -= a[l];
    }
    // 上記でkより小さい数列の個数を求めているので全体から引く
    ans = (ll)n * (n + 1) / 2 - ans;
    cout << ans << endl;


    return 0;
}
