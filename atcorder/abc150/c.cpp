#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    vector<int> p(n); rep(i, n) cin >> p[i];
    vector<int> q(n); rep(i, n) cin >> q[i];
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);

    int cnt = 0;
    int pans = 0;
    int qans = 0;
    // 全ての順列を辞書順に生成して判定する
    do {
        cnt++;
        bool pflag = true;
        bool qflag = true;
        rep(i, n){
            if(p[i] != nums[i]) pflag = false;
            if(q[i] != nums[i]) qflag = false;
        }
        if(pflag) pans += cnt;
        if(qflag) qans += cnt;
    } while(next_permutation(nums.begin(), nums.end()));
    int ans = abs(pans - qans);
    OP(ans);
}
