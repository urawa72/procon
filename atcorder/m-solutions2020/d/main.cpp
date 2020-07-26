#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD =  1000000007;
const ll INF = 1LL << 60;


int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll y = 1000;
    for(int i = 0; i < n - 1; i++){
        ll s = 0;
        if(a[i] < a[i + 1]) s = y / a[i];
        y += (a[i + 1] - a[i]) * s;
    }
    cout << y << endl;

    return 0;
}
