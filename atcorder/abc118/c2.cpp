#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

// 最大公約数 ユークリッドの互除法
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    ll g = a[0];
    for(int i = 1; i < n; i++){
        g = gcd(g, a[i]);
    }
    cout << g << endl;
}
