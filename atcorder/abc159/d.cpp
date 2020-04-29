#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

// nC2を計算する関数
// n=0,1のときは選べないので0
ll combi2(ll n){
    if(n < 2) return 0;
    return n * (n - 1) / 2;
}

int main() {
    // llじゃないとけた溢れする
    ll n; cin >> n;
    vector<int> a(n + 1);
    vector<int> v(n + 1);
    rep(i, n){
        cin >> a[i];
        v[a[i]]++;
    }

    // 全組み合わせを算出しておく
    ll sum = 0;
    REP2(i, 1, n){
        sum += combi2(v[i]);
    }

    // 全組み合わせに一旦対象番号の組み合わせを引いて、
    // -1した場合の組み合わせを足し直す
    rep(i, n){
        ll tmp = v[a[i]];
        OP(sum - combi2(tmp) + combi2(tmp - 1));
    }
}
