#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    // 棒の数を連想配列で管理しkeyが大きい順にソート
    map<ll, ll, greater<ll>> m;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        m[a]++;
    }
    ll l1 = 0, l2 = 0;
    for(auto p : m){
        // l1が未決定で4本以上ある場合は正方形作る
        if(4 <= p.second && l1 == 0){
            l1 = p.first;
            l2 = p.first;
            break;
        // 2本以上の場合はl1とl2に長さを設定する
        }else if(2 <= p.second){
            if(l1 == 0){
                l1 = p.first;
            }else{
                l2 = p.first;
                break;
            }
        }
    }
    ll ans = l1 * l2;
    cout << ans << endl;
}
