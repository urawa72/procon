#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int N; cin >> N;
    ll X; cin >> X;
    ll g = 0;
    for(int i = 0; i < N; i++){
        ll x; cin >> x;
        g = gcd(g, abs(x - X));
    }
    cout << g << endl;
}
