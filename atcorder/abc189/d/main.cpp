#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    ll ans = 1;
    ll tmp = 1;
    for(int i = 0; i < n; i++){
        tmp *= 2;
        string s; cin >> s;
        if(s == "OR") ans += tmp;
    }
    cout << ans << endl;


    return 0;
}
