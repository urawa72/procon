#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        stringstream ss;
        ss << oct << i;
        string t = ss.str();
        bool ok = true;
        for(int j = 0; j < (int)s.size(); j++){
            if(s[j] == '7'){
                ok = false;
                break;
            }
        }
        for(int j = 0; j < (int)t.size(); j++){
            if(t[j] == '7'){
                ok = false;
                break;
            }
        }
        if(ok) ans++;
    }
    cout << ans << endl;

    return 0;
}
