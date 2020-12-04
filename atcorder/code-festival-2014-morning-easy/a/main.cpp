#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    double sum = 0;
    for(int i = 0; i < n - 1; i++){
        sum += (double)(a[i + 1] - a[i]);
    }
    cout << setprecision(15) << sum / (n - 1) << endl;

    return 0;
}
