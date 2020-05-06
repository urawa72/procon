#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;

int main() {
    int n; cin >> n;
    V<ll> r(n);
    for(int i = 0; i < n; i++) cin >> r[i];
    sort(all(r), greater<ll>());

    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) sum += r[i] * r[i];
        else sum -= r[i] * r[i];
    }

    cout << setprecision(12) << sum * M_PI << endl;
}
