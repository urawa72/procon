#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    V<int> ans(6);
    for(int i = 0; i < n; i++){
        double ma, mi; cin >> ma >> mi;
        if(35 <= ma) ans[0]++;
        if(30 <= ma && ma < 35) ans[1]++;
        if(25 <= ma && ma < 30) ans[2]++;
        if(25 <= mi) ans[3]++;
        if(mi < 0 && 0 <= ma) ans[4]++;
        if(ma < 0) ans[5]++;
    }
    for(int i = 0; i < 6; i++){
        cout << ans[i];
        if(i == 5) cout << '\n';
        else cout << ' ';
    }

    return 0;
}
