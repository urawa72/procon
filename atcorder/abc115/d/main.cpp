#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

V<ll> len, pat;

ll rec(ll n, ll x){
    // バーガーがレベル0の時
    if(n == 0){
        // xの値に応じて0か1
        if(x == 1) return 1;
        else return 0;
    }
    // xが1の時は0
    if(x == 1) return 0;
    // xがレベルnの総枚数と等しい
    if(x == len[n]) return pat[n];

    ll ans = 0;
    // レベルnの半分食べるかつ真ん中のパティ+1
    if(len[n] / 2 + 1 <= x){
        // レベルn-1と真ん中のパティ食べる事は確定
        // 残りを再帰で調べる
        ans += pat[n - 1] + 1 + rec(n - 1, x - len[n] / 2 - 1);
    }
    // 一番下のバンとレベルn-1食べる
    if(len[n] / 2 + 1 > x){
        ans += rec(n - 1, x - 1);
    }
    return ans;
}

int main() {
    ll n, x; cin >> n >> x;

    // バーガーのレベルごとの総枚数とパティの枚数を求めておく
    len.resize(n + 1);
    pat.resize(n + 1);
    len[0] = pat[0] = 1;
    for(int i = 1; i <= n; i++){
        len[i] = len[i - 1] * 2 + 3;
        pat[i] = pat[i - 1] * 2 + 1;
    }
    cout << rec(n, x) << endl;

}
