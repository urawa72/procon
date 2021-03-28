#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    string s;
    cin >> s;
    string ans = "";
    ans += s[1];
    ans += s[2];
    ans += s[0];
    cout << ans << endl;

    return 0;
}
