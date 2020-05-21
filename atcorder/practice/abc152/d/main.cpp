#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

int main() {
    ll n; cin >> n;

    V<V<ll> > num(10, V<ll>(10, 0));
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int a = s[0] - '0';
        int b = s[s.size() - 1] - '0';
        num[a][b]++;
    }

    ll ans = 0;
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            ans += num[i][j] * num[j][i];
        }
    }
    cout << ans << endl;

}
