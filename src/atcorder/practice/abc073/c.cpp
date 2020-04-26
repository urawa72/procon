#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n; cin >> n;
    map<ll, ll> m;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        if(m[a] != 1) m[a]++;
        else m[a]--;
    }
    ll ans = 0;
    for(auto p : m){
        if(p.second) ans++;
    }
    cout << ans << endl;
}
