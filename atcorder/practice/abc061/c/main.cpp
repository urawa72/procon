#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;
    vector<ll> v(100000 + 1, 0);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        v[a] += b;
    }

    for(int i = 1; i <= 100000; i++){
        if(k <= v[i]){
            cout << i << endl;
            return 0;
        }
        k -= v[i];
    }
}
