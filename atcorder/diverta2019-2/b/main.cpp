#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<P<ll, ll> > v(n);
    for(auto &p : v) cin >> p.first >> p.second;

    // 2点間の差を全通り求めて一番多いパターンを採用する
    sort(ALL(v));
    map<P<ll, ll>, int> mp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            ll p = v[j].first - v[i].first;
            ll q = v[j].second - v[i].second;
            mp[make_pair(p, q)]++;
        }
    }

    int m = 0;
    for(auto p : mp) m = max(m, p.second);
    cout << n - m << endl;

    return 0;
}
