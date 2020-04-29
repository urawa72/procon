#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int N, M; cin >> N >> M;

    int ans = 0;
    rep(i, N){
        REP(j, i + 1, N){
            ans++;
        }
    }
    if(1 < M){
        rep(i, M){
            REP(j, i + 1, M){
                ans++;
            }
        }
    }
    OP(ans);
}



