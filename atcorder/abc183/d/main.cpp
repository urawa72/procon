#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n, w; cin >> n >> w;
    V<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int s, t, p; cin >> s >> t >> p;
        v.push_back({s, p});
        v.push_back({t, -p});
    }

    sort(ALL(v));

    ll sum = 0;
    for(auto p : v){
        sum += p.second;
        if(w < sum) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
