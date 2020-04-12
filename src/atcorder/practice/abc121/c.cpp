#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REPE(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
    ll n, m; cin >> n >> m;
    vector<pair<ll, ll> > v;
    rep(i, n){
        ll a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(all(v));

    ll ans = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if(sum + v[i].second < m){
            ans += v[i].first * v[i].second;
            sum += v[i].second;
        }else{
           ll t = m - sum;
           ans += v[i].first * t;
           break;
        }
    }
    cout << ans << endl;
}
