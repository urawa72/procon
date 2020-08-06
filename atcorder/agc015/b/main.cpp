#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    string s; cin >> s;

    int n = s.size();
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'U'){
            ans += (n - i - 1);
            ans += i * 2;
        }else{
            ans += i;
            ans += (n - i - 1) * 2;
        }
    }
    cout << ans << endl;

    return 0;
}
