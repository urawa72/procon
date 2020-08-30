#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mp[a]++;
    }

    int ans1 = 0, ans2 = 0;
    for(int i = 1; i <= n; i++){
        if(1 < mp[i]) ans1 = i;
        if(!mp[i]) ans2 = i;
    }
    if(ans1 == 0 && ans2 == 0) cout << "Correct" << endl;
    else cout << ans1 << ' ' << ans2 << endl;

    return 0;
}
