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
    int n; cin >> n;
    map<ll, ll> mp;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        mp[a]++;
        sum += a;
    }

    int q; cin >> q;
    V<P<ll, ll> > v(q);
    for(int i = 0; i < q; i++){
        ll b, c; cin >> b >> c;
        v[i] = make_pair(b, c);
    }

    for(int i = 0; i < q; i++){
        ll tmp = mp[v[i].first];
        ll s = tmp * v[i].first;
        ll r = tmp * v[i].second;
        mp[v[i].first] = 0;
        mp[v[i].second] += tmp;
        cout << sum - s + r << endl;
        sum = sum - s + r;
    }


    return 0;
}
