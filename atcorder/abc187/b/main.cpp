#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<double> x(n), y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            double tx = x[j] - x[i];
            double ty = y[j] - y[i];
            double a = ty / tx;
            if(-1 <= a && a <= 1) ans++;
        }
    }
    cout << ans << endl;


    return 0;
}
