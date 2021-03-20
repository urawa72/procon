#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    string ans;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == '.') break;
        else ans += s[i];
    }

    cout << ans << endl;

    return 0;
}
