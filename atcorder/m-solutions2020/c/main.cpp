#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD =  1000000007;
const ll INF = 1LL << 60;


int main() {
    int n, k; cin >> n >> k;
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = k; i < n; i++){
        if(a[i - k] < a[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
