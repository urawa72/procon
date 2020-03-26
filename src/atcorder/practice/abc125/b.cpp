#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int N;
vector<int> V;
vector<int> C;
int ANS = 0;

void rec(int vs, int cs, int i){
    if(i != N) {
        rec(vs + V[i], cs + C[i], i + 1);
        rec(vs, cs, i + 1);
    }else{
        int ans = vs - cs;
        ANS = max(ANS, ans);
    }
}

int main() {
    cin >> N;
    V.resize(N);
    C.resize(N);
    rep(i, N) cin >> V[i];
    rep(i, N) cin >> C[i];
    rec(0, 0, 0);
    OP(ANS);
}
