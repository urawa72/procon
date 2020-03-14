#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

// C++ならpairでsortが便利
int main() {
    int n; cin >> n;
    pair<pair<string, int>, int> p[n];
    rep(i, n){
        string name; cin >> name;
        int point; cin >> point;
        p[i] = make_pair(make_pair(name, -point), i);
    }
    sort(p, p + n);
    rep(i, n) OP(p[i].second + 1);
}

