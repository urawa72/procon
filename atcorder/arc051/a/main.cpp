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
    int x, y, r; cin >> x >> y >> r;
    int x2, y2, x3, y3; cin >> x2 >> y2 >> x3 >> y3;;

    int xl = x - r;
    int xr = x + r;
    int yu = y + r;
    int yd = y - r;

    if(x2 <= xl && xr <= x3 && y2 <= yd && yu <= y3){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

    if((pow(abs(x2 - x), 2) + pow(abs(y2 - y), 2) <= r * r) &&
       (pow(abs(x3 - x), 2) + pow(abs(y3 - y), 2) <= r * r) &&
       (pow(abs(x2 - x), 2) + pow(abs(y3 - y), 2) <= r * r) &&
       (pow(abs(x3 - x), 2) + pow(abs(y2 - y), 2) <= r * r)){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }


    return 0;
}
