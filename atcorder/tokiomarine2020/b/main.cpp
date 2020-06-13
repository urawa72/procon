#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll a, v; cin >> a >> v;
    ll b, w; cin >> b >> w;
    ll t; cin >> t;

    if(b < 0 && a < 0){
        if(abs(b) + w * t <= abs(a) + v * t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else if(b < 0){
        if(abs(b) + w * t <= v * t - a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else{
        if(b + w * t <= a + v * t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
