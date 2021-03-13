#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int x, l, r; cin >> x >> l >> r;

    int mi = 100000000, ans = 100000000;
    for(int i = l; i <= r; i++){
        if(x == i){
            cout << i << endl;
            return 0;
        }
        if(abs(x - i) < mi){
            ans = i;
            mi = abs(x - i);
        }
    }
    cout << ans << endl;

    return 0;
}
