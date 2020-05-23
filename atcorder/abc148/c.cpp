#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    long a, b; cin >> a >> b;

    // 最小公倍数
    // 今回は最大10の5乗なのでaをbまでの全探索でいける
    // a * iがbで割り切れれば公倍数
    for(int i = 1; i <= b; i++){
        if((a * i) % b == 0){
            OP(a * i);
            break;
        }
    }
}
