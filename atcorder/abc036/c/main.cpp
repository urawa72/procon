#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> v(n);
    map<ll, ll> m;
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        v[i] = a;
        m[a]++;
    }

    ll cnt = 0;
    for(auto &p : m){
        p.second = cnt;
        cnt++;
    }

    for(int i = 0; i < n; i++){
        cout << m[v[i]] << endl;
    }
}
