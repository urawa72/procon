#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n, m; cin >> n >> m;

    // nでScc作る分m使ってもmの方が大きい場合
    // mからnでScc作った残りを4で割ってSccつくる
    if(n * 2 < m) cout << n + (m - (n * 2)) / 4 << endl;
    // それ以外の場合、最大m/2個しかScc作れない
    else cout << m / 2 << endl;

    // 冗長
    // ll ans1 = 0, ans2 = 0;
    //
    // ll a = m / 4;
    // if(m % 4 > 1 && n >= 1) ans1++;
    // ans1 += a;
    //
    // ll c = m / 2;
    // if(n <= c){
    //     ans2 += n;
    //     c -= n;
    //     ans2 += c / 2;
    // }else{
    //     ans2 += c;
    //     if(m % 2 > 1) ans2++;
    // }
    //
    // cout << max(ans1, ans2) << endl;
}
