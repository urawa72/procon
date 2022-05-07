#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = 0;
    ll left = 0;
    for (left = 0; left < n; left++) {
        ll right = left;
        int o = 0, x = 0;
        if (s[left] == 'x') {
            x++;
        } else {
            o++;
        }
        while (right < n && (o == 0 || x == 0)) {
            right++;
            if (s[right] == 'x') {
                x++;
            } else {
                o++;
            }
        }

        if (0 < o && 0 < x) {
            ans += (n - (right + 1) + 1) * (right - left);
        }
        left = right;
        left--;
    }

    cout << ans << endl;

    return 0;
}
