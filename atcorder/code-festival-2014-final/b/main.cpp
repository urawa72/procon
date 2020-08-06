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
    int ans = 0;
    for(int i = 0; i < (int)s.size(); i++){
        int n = s[i] - '0';
        if(i & 1) ans -= n;
        else ans += n;
    }
    cout << ans << endl;

    return 0;
}
