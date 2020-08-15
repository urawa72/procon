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
    for(int i = 0; i < 3; i++){
        if(s[i] == 'R' && s[i + 1] == 'R' && s[i + 2] == 'R'){
            cout << 3 << endl;
            return 0;
        }
        if(s[i] == 'R' && s[i + 1] == 'R'){
            cout << 2 << endl;
            return 0;
        }
        if(s[i] == 'R'){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;

    return 0;
}
