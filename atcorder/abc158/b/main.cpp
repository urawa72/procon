#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    // 全探索じゃTLE
    ll n, a, b; cin >> n >> a >> b;
    ll c = a + b;
    ll d = n / c;
    ll e = n % c;
    if(a < e) e = a;
    cout << d * a + e << endl;
}

