#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> a(n + 1), p(n + 1), x(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> p[i]>> x[i];
    }

    int sum = 0;
    int ans = 1000000001;
    for(int i = 1; i <= n; i++){
        sum += a[i] - a[i - 1];
        if(sum < x[i]) ans = min(ans, p[i]);
    }
    if(ans == 1000000001) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
