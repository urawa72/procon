#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    V<int> t(n);
    int all = 0;
    for(int i = 0; i < n; i++){
        cin >> t[i];
        all += t[i];
    }

    int ans = INT_INF;
    for(int bit = 0; bit <= (1 << n); bit++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)) sum += t[i];
        }
        ans = min(ans, max(sum, all - sum));
    }
    cout << ans << endl;
}
