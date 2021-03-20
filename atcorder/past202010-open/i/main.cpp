#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    V<ll> a(n * 2);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i + n] = a[i];
    }

    V<ll> s(n * 2);
    for (int i = 0; i < n * 2 - 1; i++) s[i + 1] = s[i] + a[i];

    ll sum = s[n];
    ll ans = 1e18;

    // (総和-食べた分)-食べた分 = (総和-食べた分*2)
    for(int i = 0; i < n; i++){
        int l = 0;
        int r = n * 2 - 1 - i;
        while(1 < r - l){
            int m = (l + r) / 2;
            if(sum < 2 * (s[i + m] - s[i])) r = m;
            else l = m;
        }
        ll x = abs(2 * (s[i + r] - s[i]) - sum);
        ll y = abs(2 * (s[i + l] - s[i]) - sum);
        ans = min({ans, x, y});
    }
    cout << ans << endl;

    return 0;
}
