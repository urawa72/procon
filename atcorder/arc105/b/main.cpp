#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> a(n);
    ll mi = 10000000001;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mi = min(mi, a[i]);
    }

    for(int i = 0; i < n; i++){
        ll tmp = a[i] % mi;
        if(tmp != 0 && tmp < mi) mi = tmp;
    }

    cout << mi << endl;

    return 0;
}
