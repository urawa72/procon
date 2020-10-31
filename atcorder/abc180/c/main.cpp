#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


vector<long long> enum_divisors(ll N){
    vector<ll> res;
    // 1...√Nまで
    for(ll i = 1; i * i <= N; i++){
        if(N % i == 0){
            res.push_back(i);
            // 重複しない場合はN/iもpush
            if(N / i != i) res.push_back(N / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    ll n; cin >> n;

    V<ll> ans = enum_divisors(n);
    for(auto a : ans) cout << a << endl;

    return 0;
}
