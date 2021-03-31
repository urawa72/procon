#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
const int MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    map<char, ll> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    // 2^n-1通りの全ての部分列が区別される
    // すべての文字からどれか一つとる+全く取らない
    // 各文字の上記の積-空文字の時を引く
    ll ans = 1;
    for(auto p : mp){
        ans *= p.second + 1;
        ans %= MOD;
    }
    cout << ans - 1 << endl;

    return 0;
}
