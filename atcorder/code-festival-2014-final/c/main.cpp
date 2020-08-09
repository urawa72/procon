#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;

int main() {
    ll a; cin >> a;

    for(ll i = 10; i <= 10000; i++){
        ll k = 1, sum = 0, n = i;
        // n進数->10進数の変換処理
        // f(23)=2*23^1+13*23^0=49
        while(0 < n){
            sum += k * (n % 10);
            // 既にaを超えたらそれ以降の候補もありえないため終了
            if(sum > a){
                cout << -1 << endl;
                return 0;
            }
            k *= i;
            n /= 10;
        }
        // 10進数変換結果がaと同じであれば答え
        if(sum == a){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
