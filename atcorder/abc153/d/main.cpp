#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    ll h; cin >> h;

    ll ans = 1;
    for(int i = 1; h > 1 ; i++){
        h /= 2;
        ans += pow(2, i);
    }
    cout << ans << endl;
}
