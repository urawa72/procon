#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;

    // 鶴亀算
    // for(int i = 0; i <= n; i++){
    //     int x = m - 2 * i - 3 * (n - i);
    //     if(0 <= x && 0 <= n - i - x){
    //         cout << i << " " << n - i - x << " " << x << endl;
    //         return 0;
    //     }
    // }

    // 連立方程式
    for(int a = 0; a <= n; a++){
        int c = m - 3 * n + a;
        int b = m - 2 * n - 2 * c;
        if(b >= 0 && c >= 0){
            cout << a << " " << b << " " << c << endl;
            return 0;
        }
    }
    cout << "-1 -1 -1" << endl;
}
