#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int main() {
    int n; cin >> n;
    vector<ll> t(n);
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    ll l = t[0];
    for(int i = 1; i < n; i++){
        l = lcm(l, t[i]);
    }
    cout << l << endl;
}
