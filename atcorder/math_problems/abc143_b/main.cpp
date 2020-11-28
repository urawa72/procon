#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            ans += d[i] * d[j];
        }
    }
    cout << ans << endl;

    return 0;
}
