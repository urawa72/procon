#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
typedef long long ll;


int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));

    for(int i = 0; i < n - 1; i++){
        a[i + 1] = gcd(a[i], a[i + 1]);
    }
    cout << a[n - 1] << endl;
}

