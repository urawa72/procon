#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> ans(n);
    int b1; cin >> b1;
    ans[0] = b1;
    ans[1] = b1;

    int cnt = 1;
    REP(i, 1, n - 1){
        int b; cin >> b;
        if(b >= ans[cnt]){
            ans[cnt + 1] = b;
        }else{
            ans[cnt] = b;
            ans[cnt + 1] = b;
        }
        cnt++;
    }
    OP(accumulate(ans.begin(), ans.end(), 0));
}
