#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<pair<ll, ll> > x(n);
    vector<pair<ll, ll> > y(m);
    for(int i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        x[i] = make_pair(a, b);
    }
    for(int i = 0; i < m; i++){
        ll c, d; cin >> c >> d;
        y[i] = make_pair(c, d);
    }

    for(int i = 0; i < n; i++){
        ll dis = 1LL << 60, num = 0;
        for(int j = 0; j < m; j++){
            ll nx = abs(x[i].first - y[j].first);
            ll ny = abs(x[i].second - y[j].second);
            if(nx + ny < dis){
                dis = nx + ny;
                num = j + 1;
            }
        }
        cout << num << endl;
    }
}
