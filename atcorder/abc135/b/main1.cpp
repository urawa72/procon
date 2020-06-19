#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    int p[n]; rep(i, n) cin >> p[i];

    // 冗長
    // string ans = "YES";
    // int swap = 0;
    // for(int i = n - 1; 0 <= i; i--){
    //     for(int j = 0; j < i + 1; j++){
    //         if(p[j] <= p[i]) continue;
    //         if(p[i] < p[j] && swap == 0){
    //             int tmp = p[j];
    //             p[j] = p[i];
    //             p[i] = tmp;
    //             swap++;
    //         }else{
    //             swap++;
    //             ans = "NO";
    //             break;
    //         }
    //     }
    //     if(1 < swap) break;
    // }
    // OP(ans);

    // 解答例
    // 1, 3, 5, 8とか飛び飛びはありえないから
    // 添字でソートされているか判定できる
    // ソートされていればp[i]が添字+1と等しいはず
    int k = 0;
    rep(i, n) if(p[i] != i + 1) k++;
    if(k <= 2){
        OP("YES");
    }else{
        OP("NO");
    }
}
