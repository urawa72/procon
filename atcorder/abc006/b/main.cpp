#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    if(n <= 2){
        cout << 0 << endl;
        return 0;
    }
    if(n == 3){
        cout << 1 << endl;
        return 0;
    }

    V<ll> v(1000010, 0);
    v[3] = 1;
    for(int i = 4; i <= n; i++){
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];
        v[i] %= 10007;
    }
    cout << v[n] << endl;

    return 0;
}
