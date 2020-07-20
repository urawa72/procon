#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ll a, b, n; cin >> a >> b >> n;

    ll x = n;
    if(b <= n) x = b - 1 ? b - 1 : 1;
    ll res = floor(a * x / b) - a * floor(x / b);
    cout << res << endl;
}
