#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    ll n, m; cin >> n >> m;

    // priority_queueで解く
    priority_queue<P<ll ,ll> > q;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        q.push(make_pair(a, 1));
    }
    for(int i = 0; i < m; i++){
        ll b, c; cin >> b >> c;
        q.push(make_pair(c, b));
    }

    ll ans = 0;
    // 常に一番大きい値が取れるので、n回取る
    for(int i = 0; i < n; i++){
        auto p = q.top();
        q.pop();
        ans += p.first;
        if(p.second > 1){
            // 取ったら枚数を減らして戻す
            p.second--;
            q.push(p);
        }
    }
    cout << ans << endl;


    return 0;
}
