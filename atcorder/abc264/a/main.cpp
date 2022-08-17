#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;
const ll INF = 1LL << 60;

int main() {
    int l, r;
    cin >> l >> r;
    string s = "atcoder";
    cout << s.substr(l - 1, r - l + 1) << endl;

    return 0;
}
