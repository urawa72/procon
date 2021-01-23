#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    if(s[0] == s[1] && s[1] == s[2] && s[0] == s[2]) cout << "Won" << endl;
    else cout << "Lost" << endl;

    return 0;
}
