#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll a, b, x; cin >> a >> b >> x;

    ll aa = 0, bb = 0;
    if(a == 0) aa = 1;
    else aa = (a - 1) / x;
    bb = b / x;
    if(a == 0) cout << bb + aa << endl;
    else cout << bb - aa << endl;
}
