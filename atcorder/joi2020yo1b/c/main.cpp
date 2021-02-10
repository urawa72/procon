#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for(auto p : mp){
        ans = max(p.second, ans);
    }
    cout << ans << endl;

    return 0;
}
