#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int a, b; cin >> a >> b;

    V<int> v(a), w(b);
    for(int i = 0; i < a; i++) cin >> v[i];
    for(int i = 0; i < b; i++) cin >> w[i];

    V<string> ans(4);
    ans[0] = "x x x x";
    ans[1] = " x x x ";
    ans[2] = "  x x  ";
    ans[3] = "   x   ";

    for(int i = 0; i < a; i++){
        if(v[i] == 1) ans[3][3] = '.';
        if(v[i] == 2) ans[2][2] = '.';
        if(v[i] == 3) ans[2][4] = '.';
        if(v[i] == 4) ans[1][1] = '.';
        if(v[i] == 5) ans[1][3] = '.';
        if(v[i] == 6) ans[1][5] = '.';
        if(v[i] == 7) ans[0][0] = '.';
        if(v[i] == 8) ans[0][2] = '.';
        if(v[i] == 9) ans[0][4] = '.';
        if(v[i] == 0) ans[0][6] = '.';
    }

    for(int i = 0; i < b; i++){
        if(w[i] == 1) ans[3][3] = 'o';
        if(w[i] == 2) ans[2][2] = 'o';
        if(w[i] == 3) ans[2][4] = 'o';
        if(w[i] == 4) ans[1][1] = 'o';
        if(w[i] == 5) ans[1][3] = 'o';
        if(w[i] == 6) ans[1][5] = 'o';
        if(w[i] == 7) ans[0][0] = 'o';
        if(w[i] == 8) ans[0][2] = 'o';
        if(w[i] == 9) ans[0][4] = 'o';
        if(w[i] == 0) ans[0][6] = 'o';
    }

    for(int i = 0; i < 4; i++) cout << ans[i] << endl;

    return 0;
}
