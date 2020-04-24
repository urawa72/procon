#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string s; cin >> s;
    ll k; cin >> k;
    char target = '1';
    for(int i = 0; i < min(k, (ll)s.size()); i++){
        if(s[i] != '1'){
            target = s[i];
            break;
        }
    }
    char ans = target;
    // if(k == 1) ans = s[0];
    // if(k < s.size() && s[k - 1] == '1') ans = '1';
    cout << ans << endl;
}

