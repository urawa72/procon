#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, k; cin >> n >> k;

    int ans = 0;
    while(n != 0){
        n /= k;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
