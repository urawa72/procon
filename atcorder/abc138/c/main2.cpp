#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int n; cin >> n;
    V<double> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(ALL(v));
    double ans = v[0];
    for(int i = 1; i < n; i++){
        ans = (ans + v[i]) / 2;
    }
    cout << ans << endl;

    return 0;
}
