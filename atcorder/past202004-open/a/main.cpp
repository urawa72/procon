#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s, t; cin >> s >> t;

    int n, m;

    if(s[0] == 'B') n = -(s[1] - '0');
    else n = s[0] - '0';
    if(t[0] == 'B') m = -(t[1] - '0');
    else m = t[0] - '0';

    if((n < 0 && 0 < m) || (m < 0 && 0 < n)) cout << abs(m - n) - 1 << endl;
    else cout << abs(m - n) << endl;


    return 0;
}
