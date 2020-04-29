#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> vec(n);
    rep(i, n) cin >> vec[i];

    // ソートしてn/2とn/2-1の差分が2分割できる整数の数
    sort(vec.begin(), vec.end());
    int ans = vec[n / 2] - vec[n / 2 - 1];
    // 冗長
    // int m = vec[n / 2];
    // int ans = 0;
    // while(vec[n / 2 - 1] != m){
    //     ans++;
    //     m--;
    // }
    OP(ans);
}
