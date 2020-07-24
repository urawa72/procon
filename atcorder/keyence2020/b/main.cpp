#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long double ld;
typedef long long ll;
const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


// 蟻本と同じ 区間スケジューリング問題
int main() {
    int n; cin >> n;
    // x+lでソートするためfirstにセットする
    V<P<ll, ll> > v(n);
    for(int i = 0; i < n; i++){
        ll x, l; cin >> x >> l;
        v[i] = make_pair(x + l, x - l);
    }
    sort(ALL(v));


    int ans = 0;
    // 最後に選んだロボットのx-l（負の座標もあり得るため-1e9とする）
    ll pre = -1e9;
    for(int i = 0; i < n; i++){
        // 前のロボットのx+lと今のロボットのx-lを比較して重なってなかったら残る
        if(pre <= v[i].second){
            ans++;
            pre = v[i].first;
        }
    }
    cout << ans << endl;



    return 0;
}
