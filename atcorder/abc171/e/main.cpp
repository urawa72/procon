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
    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // XORの性質
    ll s = 0;
    for(int i = 0; i < n; i++){
        s ^= a[i];
    }
    for(int i = 0; i < n; i++){
        a[i] ^= s;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }


    return 0;
}
