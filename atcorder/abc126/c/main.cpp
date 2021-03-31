#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll n, k; cin >> n >> k;

    V<ll> v(n + 1);
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        ll sum = i;
        while(sum < k){
            sum *= 2;
            cnt++;
        }
        v[i] = pow(2, cnt);
    }

    double ans = 0;
    double d = (double)1 / n;
    for(int i = 1; i <= n; i++){
        double c = (double)1 / v[i];
        ans += (d * c);
    }
    printf("%.12f\n", ans);

    return 0;
}
