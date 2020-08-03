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
    string s; cin >> s;

    ll r = 0, w = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R') r++;
        else w++;
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'W'){
            if(0 < r) {
                r--;
                ans++;
            }
        }else{
            r--;
        }
    }
    cout << ans << endl;

    return 0;
}
