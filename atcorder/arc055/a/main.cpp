#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll n; cin >> n;
    string ans = "1";
    for(int i = 0; i < n - 1; i++) ans += '0';
    ans += '7';
    cout << ans << endl;

    return 0;
}
