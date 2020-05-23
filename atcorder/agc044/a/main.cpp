#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const ll INF = 1LL << 30;

ll rec(V<ll> &v, ll cnt, ll res){
    if(res == v[0]){
        return cnt;
    }else if(res > v[0] || res < 0){
        return INF;
    }

    ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
    cnt1 = rec(v, cnt + v[1], res * 2);
    cnt2 = rec(v, cnt + v[2], res * 3);
    cnt3 = rec(v, cnt + v[3], res * 5);
    // cnt4 = rec(v, cnt + v[4], res + 1);
    // cnt5 = rec(v, cnt + v[4], res - 1);
    ll m = min({cnt1, cnt2, cnt3, cnt4, cnt5});
    return m;

}

int main() {
    int t; cin >> t;
    V<V<ll> > v(t + 1);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 5; j++){
            ll tmp; cin >> tmp;
            v[i].push_back(tmp);
        }
    }

    for(int i = 0; i < t; i++){
        ll cnt = v[i][4];
        ll res = rec(v[i], cnt, 1);
        cout << res << endl;
    }

}
