#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int n;
    cin >> n;
    V<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

    // 全探索
    int ans = 100001;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int cost;
            if(i == j) cost = a[i] + b[j];
            else cost = max(a[i], b[j]);
            ans = min(ans, cost);
        }
    }
    cout << ans << endl;

    return 0;
}
