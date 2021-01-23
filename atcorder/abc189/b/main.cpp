#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, x; cin >> n >> x;
    x *= 100;

    ll sum = 0;
    for(int i = 0; i < n; i++){
        int v, p; cin >> v >> p;
        sum += (v * p);
        if(x < sum) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
