#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    V<int> a(m + 2);
    a[0] = 0;
    for(int i = 1; i <= m; i++) cin >> a[i];
    a[m + 1] = n + 1;
    sort(ALL(a));

    int mi = n;
    V<int> b(m + 1);
    for(int i = 0; i < m + 1; i++){
        b[i] = a[i + 1] - a[i] - 1;
        if(0 < b[i]) mi = min(mi, b[i]);
    }
    int ans = 0;
    for(int i = 0; i < m + 1; i++){
        ans += ((b[i] + mi - 1) / mi);
    }
    cout << ans << endl;

    return 0;
}
