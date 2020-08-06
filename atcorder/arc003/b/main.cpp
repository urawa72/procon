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
    V<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++){
        reverse(ALL(v[i]));
    }

    sort(ALL(v));
    for(int i = 0; i < n; i++){
        reverse(ALL(v[i]));
        cout << v[i] << endl;
    }

    return 0;
}
