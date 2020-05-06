#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int a; cin >> a;
    int ans = 0;
    for(int i = 0; i < a; i++){
        int b = a - i;
        ans = max(ans, i * b);
    }
    cout << ans << endl;
}
