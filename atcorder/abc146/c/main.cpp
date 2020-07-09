#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long

const int MOD =  1000000007;
const int IINF = INT_MAX;
const ll INF = 1LL << 60;


int main() {

    ll a, b, x; cin >> a >> b >> x;

    ll l = 0, r = 1000000001;
    while(1 < r - l){
        ll m = (l + r) / 2;
        ll k = to_string(m).size();
        ll sum = a * m + b * k;
        if(sum <= x) l = m;
        else r = m;
    }
    cout << l << endl;

    return 0;
}
