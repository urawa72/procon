#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > p(n, vector<int>(n, 0));
    rep(i, m){
        int x, y;
        cin >> x >> y;
        // 0originのため
        --x;
        --y;
        // 相互にフラグ立てる
        p[x][y] = p[y][x] = 1;
    }

    int ans = 0;
    for(int bit = 1; bit < (1 << n); bit++){
        int bt = bitset<12>(bit).count();
        // 現状のansより小さい場合はスルー
        if(bt <= ans) continue;

        bool flag = true;
        // OP(bitset<12>(bit));
        rep(i, n){
            // cout << "i:" << i << endl;
            rep(j, i){
                // cout << "   j:" << j << endl;
                if((bit >> i & bit >> j & 1) && p[i][j] != 1){
                    flag = false;
                }
            }
        }
        if(flag) ans = bt;
    }
    OP(ans)
}
