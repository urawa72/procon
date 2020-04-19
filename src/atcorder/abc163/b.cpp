#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n, m; cin >> n >> m;
    ll sum = 0;
    for(int i = 0; i < m; i++){
        ll a; cin >> a;
        sum += a;
    }
    if(n - sum >= 0){
        cout << n - sum << endl;
    }else{
        cout << -1 << endl;
    }
}
