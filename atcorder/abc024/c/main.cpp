#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

// 貪欲法
int main() {
    ll n, d, k; cin >> n >> d >> k;
    V<P<ll, ll> > v(d);
    for(int i = 0; i < d; i++){
        ll l, r; cin >> l >> r;
        v[i] = make_pair(l, r);
    }

    V<P<ll, ll> > w(k);
    for(int i = 0; i < k; i++){
        ll s, g; cin >> s >> g;
        w[i] = make_pair(s, g);
    }

    for(int i = 0; i < k; i++){
        int ans = 0;
        // スタートとゴールどっちが大きいかのフラグ
        bool flag1 = w[i].first < w[i].second ? 1 : 0;
        // ゴール判定フラグ
        bool flag2 = false;
        for(int j = 0; j < d; j++){
            // 移動可能であれば可能な限り移動
            if(v[j].first <= w[i].first && w[i].first <= v[j].second){
                // スタートとゴールどちらが大きかによって更新する値が変わる
                if(flag1) w[i].first = v[j].second;
                else w[i].first = v[j].first;
            }

            if(flag1){
                // スタートがゴール以上になってたら終了
                if(w[i].second <= w[i].first){
                    ans = j + 1;
                    flag2 = true;
                }
            }else{
                // ゴールの方が小さい時は逆の判定
                if(w[i].first <= w[i].second){
                    ans = j + 1;
                    flag2 = true;
                }
            }

            if(flag2) break;
        }
        cout << ans << endl;
    }
}
