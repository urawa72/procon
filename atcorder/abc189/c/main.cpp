#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        int mi = a[i];
        int ma = 0;
        for(int j = i; j < n; j++){
            mi = min(mi, a[j]);
            int c = j - i + 1;
            ma = max(c * mi, ma);
        }
        ans = max(ans, ma);
    }
    cout << ans << endl;

    return 0;
}
