#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


// 最終的に.....######となる
// ある境目で左側の黒を白に右側の白を黒に変える
// ある境目で変えた数をカウントし最小値を求める
int main() {
    int n; cin >> n;
    string s; cin >> s;

    // 全体の白をカウント
    int wcnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '.') wcnt++;
    }

    // 境目をずらして(左側の黒と白総数-右側の白)で最小値を求める
    // 初期値は白の総数（純粋に白だけ変えた時）
    int ans = wcnt;
    int b = 0, w = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '#') b++;
        if(s[i] == '.') w++;
        ans = min(ans, b + wcnt - w);
    }
    cout << ans << endl;


    return 0;
}
