#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll a, b, c; cin >> a >> b >> c;
    ll MOD = 1e9 + 7;
    cout << a * b % MOD * c % MOD << endl;
}
