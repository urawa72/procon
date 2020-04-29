#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> vec;
    rep(i, n){
        int v; cin >> v;
        vec.push_back(v);
    }
    sort(vec.begin(), vec.end());

    double ans = vec[0];
    REP(i, 1, n){
        ans = (ans + vec[i]) / 2;
    }
    OP(ans);
}
