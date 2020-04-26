#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a < b) a = b; }
template<class T> void chmin(T& a, T b) { if(a > b) a = b; }

int main() {
    int n; cin >> n;
    vector<ll> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];
    ll ans = t[0];
    for(int i = 1; i < n; i++){
        ans = lcm(ans, t[i]);
    }
    cout << ans << endl;
}

