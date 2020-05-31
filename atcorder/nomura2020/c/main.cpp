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
    int n; cin >> n;
    V<ll> a(n + 1);
    for(int i = 0; i < n + 1; i++) cin >> a[i];

    if(a[0] != 0){
        cout << -1 << endl;
        return 0;
    }



}
