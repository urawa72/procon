#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll n; cin >> n;
    V<ll> a(n);
    map<ll, ll> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }

    map<ll, ll> zm;
    ll i = 0;
    for(auto p : m){
        zm[p.first] = i;
        i++;
    }

    for(int i = 0; i < n; i++){
        cout << zm[a[i]] << endl;
    }

}
