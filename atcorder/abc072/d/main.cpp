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
    V<int> p(n);
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        t--;
        p[i] = t;
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(p[i] != i) continue;
        if(p[i] == i && p[i + 1] != i){
            swap(p[i], p[i + 1]);
            ans++;
        }
    }
    cout << ans << endl;
}
