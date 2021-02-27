#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    ll n; cin >> n;

    map<ll, ll> mp;
    ll sum = 0;
    for(ll i = 2; pow(i, 2) <= n; i++){
        for(ll j = 2; pow(i, j) <= n; j++){
            if(mp[pow(i, j)]) continue;
            sum++;
            mp[pow(i, j)]++;
        }
    }
    cout << n - sum << endl;



    return 0;
}
