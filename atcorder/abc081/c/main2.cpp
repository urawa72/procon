#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;
    map<ll, ll> m;
    // mapでボールの個数をカウント
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        m[a]++;
    }
    vector<ll> v;
    // 個数を配列にセットし直す
    for(auto p : m){
        v.push_back(p.second);
    }
    sort(all(v));
    ll ans = 0;
    // 種類数
    int c = m.size();
    // ソートして種類-k個小さい順に個数を取って結果に足す
    for(int i = 0; i < c - k; i++){
        ans += v[i];
    }
    cout << ans << endl;
}
