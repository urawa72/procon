#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    string s; cin >> s;

    int n = s.size();
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a') a++;
        if(s[i] == 'b') b++;
        if(s[i] == 'c') c++;
    }

    // 各文字の出現回数の差が1以下であれば良い
    // 同じ文字が2余るとアウト
    if(abs(a - b) <= 1 && abs(b - c) <= 1 && abs(a - c) <= 1) {
        cout << "YES" << endl;
        return 0;
    }

    // for(int i = 0; i < n / 3; i++){
    //     if(0 < a && 0 < b && 0 < c) {
    //         a--;
    //         b--;
    //         c--;
    //     } else {
    //         break;
    //     }
    // }
    //
    // if(a == 0 && b == 0 && c == 0) {
    //     cout << "YES" << endl;
    //     return 0;
    // }
    //
    // if(a <= 1 && b <= 1 && c == 0) {
    //     cout << "YES" << endl;
    //     return 0;
    // }
    //
    // if(a == 0 && b <= 1 && c <= 1) {
    //     cout << "YES" << endl;
    //     return 0;
    // }
    //
    // if(a <= 1 && b == 0 && c <= 1) {
    //     cout << "YES" << endl;
    //     return 0;
    // }

    cout << "NO" << endl;

    return 0;
}
