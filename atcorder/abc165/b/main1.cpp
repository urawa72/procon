#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll x; cin >> x;
    ll y = 100;
    ll cnt = 0;
    while(1){
        y += (y / 100);
        cnt++;
        if(x <= y) break;
    }
    cout << cnt << endl;
}
