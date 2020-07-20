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
    int n, m; cin >> n >> m;

    // priority_queue
    priority_queue<P<ll, ll> > q;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        q.push({a, 1});
    }
    for(int i = 0; i < m; i++){
        ll b, c; cin >> b >> c;
        q.push({c, b});
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        auto p = q.top();
        q.pop();
        ans += p.first;
        if(p.second > 1){
            p.second--;
            q.push(p);
        }
    }

    cout << ans << endl;

    return 0;
}
