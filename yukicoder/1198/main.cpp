#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;
    if(s == "1" || s == "4") {
        cout << -1 << endl;
        return 0;
    }
    int n = s.size();
    int x = s[n - 1] - '0';
    if(2 <= n) x += (s[n - 2] - '0') * 10;
    if(x % 2 == 1 || x % 4 == 0) cout << 1 << endl;
    else cout << -1 << endl;

    return 0;
}
