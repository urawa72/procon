#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for(int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int d, g;
    int p[d], c[d];
    cin >> d >> g;
    rep(i, d) cin >> p[i] >> c[i];

    int ans = 1001;
    for(int bit = 0; bit < (1 << d); bit++){
        int sum = 0;
        int cnt = 0;
        rep(i,d){
            if(bit & (1 << i)){
                cnt += p[i];
                sum += (i+1)*100*p[i]+c[i];
            }
        }
        // 足りない場合は高得点の問題から解いていく
        // この時全完してもボーナス点は上で考慮されるため加算不要
        if(sum < g){
            for(int i = d-1; i >= 0; i--){
                // フラグの立ってない問題を解く
                if(bit & (1 << i)) continue;
                rep(j,p[i]){
                    if(sum >= g) break;
                    sum += (i+1)*100;
                    cnt += 1;
                }
            }
        }
        if(sum >= g) ans = min(ans, cnt);
    }

    OP(ans);
    return 0;
}
