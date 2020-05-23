#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    ll ans = k;
    for(int i = 1; i < n; i++){
        ans *= (k - 1);
    }
    cout << ans << endl;
}
