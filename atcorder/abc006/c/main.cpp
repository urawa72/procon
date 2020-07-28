#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


int main() {
    int n, m; cin >> n >> m;

    // 老人2人=大人1人赤ちゃん1人なので
    // 老人が0/1だけ考えれば良い
    for(int a = 0; a <= n; a++){
        // 老人が1人
        int b = 1;
        int c = n - b - a;
        if(0 <= c && a * 2 + b * 3 + c * 4 == m){
            cout << a << ' ' << b << ' ' << c << endl;
            return 0;
        }
        // 老人が0人
        b = 0;
        c = n - a;
        if(0 <= c && a * 2 + c * 4 == m){
            cout << a << ' ' << b << ' ' << c << endl;
            return 0;
        }
    }
    cout << "-1 -1 -1" << endl;

    return 0;
}
