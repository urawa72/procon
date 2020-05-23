#include <bits/stdc++.h>
#include <functional>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll n; cin >> n;
    vector<pair<ll, ll> > v(n);
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        v[i] = make_pair(a, i + 1);
    }
    sort(all(v), greater<pair<ll, ll> >());
    for(ll i = 0; i < n; i++){
        cout << v[i].second << endl;
    }
}
