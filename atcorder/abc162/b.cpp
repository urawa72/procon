#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll sum = 0;
    for(ll i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0 || i % 15 == 0) continue;
        sum += i;
    }
    cout << sum << endl;
}
