#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    vector<int> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        int a = abs(x[i] - 0) * 2;
        int b = abs(x[i] - k) * 2;
        ans += min(a, b);
    }
    cout << ans << endl;
}
