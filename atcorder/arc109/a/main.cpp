#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b, x, y; cin >> a >> b >> x >> y;

    if(a == b){
        cout << x << endl;
        return 0;
    }

    int ans = 0;
    if(a < b){
        ans += min((y * (b - a)), x * 2 * (b - a));
        ans += x;
    }else{
        if(a - b == 1){
            ans += x;
        }else{
            if(y * (a - b) < x * 2 * (a - b)){
                ans += (y * (a - b - 1));
                ans += x;
            }else{
                ans += (x * 2 * (a - b));
                ans -= x;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
