#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0, cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i - 1] < a[i]){
            // 単調増加をカウント
            cnt++;
        }else{
            // 単調増加でなくなったら1〜カウント分足す
            // ans += cnt * (cnt + 1) / 2; の方が望ましい
            while(cnt > 0){
                ans += cnt;
                cnt--;
            }
            // 足し終えたら初期化する
            cnt = 1;
        }
    }
    // 最後の分のcnt処理
    if(cnt >= 1){
        while(cnt > 0){
            ans += cnt;
            cnt--;
        }
    }
    cout << ans << endl;
}
