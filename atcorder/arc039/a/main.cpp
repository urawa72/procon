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

    int ans = a - b;
    int m = b / 100;
    for(int i = m; i > 0; i--){
        int tmp = b - m * 100 + i * 100;
        ans = max(ans, a - tmp);
    }
    int l = a / 100;
    for(int i = l; i < 10; i++){
        int tmp = a - l * 100 + i * 100;
        ans = max(ans, tmp - b);
    }
    m = b % 100 / 10;
    for(int i = m; i >= 0; i--){
        int tmp = b - m * 10 + i * 10;
        ans = max(ans, a - tmp);
    }
    l = a % 100 / 10;
    for(int i = l; i < 10; i++){
        int tmp = a - l * 10 + i * 10;
        ans = max(ans, tmp - b);
    }
    m = b % 10;
    for(int i = m; i >= 0; i--){
        int tmp = b - m + i;
        ans = max(ans, a - tmp);
    }
    l = a % 10;
    for(int i = l; i < 10; i++){
        int tmp = a - l + i;
        ans = max(ans, tmp - b);
    }
    cout << ans << endl;


    return 0;
}
