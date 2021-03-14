#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
locale L = locale::classic(); // for tolower, toupper

int main() {
    string s, t; cin >> s >> t;

    if(s == t){
        cout << "same" << endl;
        return 0;
    }

    string ss, tt;
    for(int i = 0; i < 3; i++){
        ss += tolower(s[i], L);
        tt += tolower(t[i], L);
    }
    if(ss == tt) cout << "case-insensitive" << endl;
    else cout << "different" << endl;

    return 0;
}
