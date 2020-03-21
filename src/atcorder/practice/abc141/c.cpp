#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n, k, q; cin >> n >> k >> q;
    ll d = k - q;
    vector<int> vec(n + 1);

    // O(n+q+n)
    // 開始ポイントを減らしておく
    REP2(i, 1, n){
        vec[i] = d;
    }
    // 正解者は増やしていく
    rep(i, q){
        int a; cin >> a;
        vec[a] += 1;
    }
    REP2(i, 1, n){
        if(vec[i] > 0){
            OP("Yes");
        }else{
            OP("No");
        }
    }
}
