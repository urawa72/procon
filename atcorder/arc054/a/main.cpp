#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll l, x, y, s, d; cin >> l >> x >> y >> s >> d;

    // 完結
    double a = s <= d ? d - s : d + l - s;
    if(x < y){
        cout << setprecision(12)<< min(a / (x + y), (l - a) / (y - x)) << endl;
    }else{
        cout << setprecision(12) << a / (x + y) << endl;
    }

    // ll a = s < d ? abs(d - s) : (l - s) + d;
    // ll b = s < d ? (l - d) + s : abs(d - s);
    //
    // double e = x + y;
    // double f = x < y ? y - x : 0;
    //
    // double ans1 = a / e;
    // double ans2 = (double)IINF;
    // if(0 < f) ans2 = b / f;
    //
    // cout << setprecision(12) << min(ans1, ans2) << endl;


    return 0;
}
