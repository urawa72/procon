#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<pair<int, int> > vec(n);
    rep(i, n){
        int a; cin >> a;
        vec[i] = {a, i};
    }

    // aでソート
    sort(vec.begin(), vec.end());

    vector<int> ans(n);
    rep(i, n){
        if(i == n - 1){
            ans[vec[i].second] = vec[n - 2].first;
        }else{
            ans[vec[i].second] = vec[n - 1].first;
        }
    }
    rep(i, n) OP(ans[i]);
}
