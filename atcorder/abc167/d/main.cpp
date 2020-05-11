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

    V<ll> tmp(n + 1);
    V<ll> b;
    ll next = a[1];
    tmp[1]++;
    tmp[next]++;
    ll cnt = 0, p = 1;
    while(1){
        next = a[next];
        tmp[next]++;
        if(tmp[next] > 2) break;
        cnt++;
        if(tmp[next] == 2){
            b.push_back(next);
            p++;
        }
    }
    ll y = k - (cnt - p);

    ll x = y % (p - 1);
    cout << b[x + 1] << endl;

}
