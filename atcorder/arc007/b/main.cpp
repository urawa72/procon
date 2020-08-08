#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n, m; cin >> n >> m;
    V<int> v(m);
    for(int i = 0; i < m; i++) cin >> v[i];

    V<int> w(n + 1);
    for(int i = 1; i <= n; i++) w[i] = i;

    int now = 0;
    for(int i = 0; i < m; i++){
        for(int j = 1; j <= n; j++){
            if(v[i] == w[j]){
                w[j] = now;
                now = v[i];
                break;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << w[i] << endl;
    }

    return 0;
}
