#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
ll MOD = 1e9 + 7;

int main() {
    ll n, k; cin >> n >> k;
    ll sum = 0;
    for(int i = k; i <= n + 1; i++){
        sum += (n - i + 1) * i + 1;
        sum %= MOD;
    }
    cout << sum << endl;
}
