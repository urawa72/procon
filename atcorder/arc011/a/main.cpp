#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int m, n, N; cin >> m >> n >> N;

    int ans = N;
    int t = N, s = 0;
    while(0 < t){
        if(t < m){
            int tmp = (t + s) % m;
            t = (t + s) / m * n;
            s = tmp;
        }else{
            s += t % m;
            t = t / m * n;
        }
        ans += t;
    }
    cout << ans << endl;

    return 0;
}
