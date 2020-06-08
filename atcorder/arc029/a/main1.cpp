#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> t;
    t.resize(n);
    rep(i, n) cin >> t[i];

    // bit全探索で
    int ans = 200;
    for(int bit = 0; bit < 1 << n; bit++){
        int x = 0, y = 0;
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                x += t[i];
            }else{
                y += t[i];
            }
        }
        ans = min(ans, max(x, y));
    }
    cout << ans << endl;
    // 全探索
    // sort(all(t), greater<int>());
    //
    // int x = 0, y = 0;
    // for(int i = 0; i < t.size(); i++){
    //     if(x < y) x += t[i];
    //     else y += t[i];
    // }
    // cout << max(x, y) << endl;
}
