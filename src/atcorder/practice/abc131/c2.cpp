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
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll l;
    if(c < d){
        l = lcm(c, d);
    }else{
        l = lcm(d, c);
    }
    ll x = (b / c - (a - 1) / c) + (b / d - (a - 1) / d) - (b / l - (a - 1) / l);
    cout << b - a + 1 - x << endl;
}
