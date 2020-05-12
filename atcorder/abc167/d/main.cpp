#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n, k; cin >> n >> k;
    V<ll> a(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];

    V<bool> visit(n + 1);
    V<ll> root;
    ll now = 1;
    while(1){
        if(visit[now]) break;
        root.push_back(now);
        visit[now] = true;
        now = a[now];
    }

    // ループのスタート地点
    int s = find(all(root), now) - root.begin();
    // ループの周期
    int r = (int)root.size() - s;

    if(k < s) cout << root[k] << endl; // ループに到達しない場合
    else cout << root[(k - s) % r + s] << endl; // スタート地点までを引いて剰余で求める

}
