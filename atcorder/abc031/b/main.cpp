#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int l, h; cin >> l >> h;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a < l) cout << l - a << endl;
        else if(l <= a && a <= h) cout << 0 << endl;
        else cout << -1 << endl;
    }

    return 0;
}
