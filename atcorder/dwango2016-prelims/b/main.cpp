#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    V<ll> v(n - 1);
    for(int i = 0; i < n - 1; i++) cin >> v[i];

    // 最初はK1でOK
    cout << v[0] << ' ';
    for(int i = 0; i < n - 1; i++){
        if(i != n - 2){
            // 次の方が大きい場合は今の値を使う
            // そうでなければ次の値を使えばmax(Lj, Lj+1)は矛盾しない
            if(v[i] <= v[i + 1]){
                 cout << v[i] << ' ';
            }else{
                 cout << v[i + 1] << ' ';
            }
        }else{
            // 最後は無条件でK[n-2]の値でOK
            cout << v[i] << endl;
        }
    }

    return 0;
}
