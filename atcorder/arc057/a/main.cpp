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
    ll a, k; cin >> a >> k;
    ll t = 2e12;
    ll s = a;
    ll cnt = 0;
    if(k == 0){
        cout << t - a << endl;
        return 0;
    }
    while(1){
            s += (s * k + 1);
            cnt++;
            if(t <= s) break;
    }
    cout << cnt << endl;
    return 0;
}
