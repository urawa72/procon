#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n; cin >> n;
    int ans = 100;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        ans = min(ans, t);
    }
    cout << ans << endl;
}
