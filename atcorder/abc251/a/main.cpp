#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


int main() {
    string s;
    cin >> s;

    if (s.length() == 1) {
        cout << s + s + s + s + s + s << endl;
    }
    if (s.length() == 2) {
        cout << s + s + s << endl;
    }
    if (s.length() == 3) {
        cout << s + s << endl;
    }

    return 0;
}
