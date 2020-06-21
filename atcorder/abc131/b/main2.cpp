#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int n, l; cin >> n >> l;
    int sum = 0;
    V<int> a(n);
    for(int i = 0; i < n; i++){
        a[i] = l + i;
        sum += a[i];
    }

    int ans = IINF;
    for(int i = 0; i < n; i++){
        int tmp = sum - a[i];
        if(abs(tmp - sum) < abs(ans - sum)) ans = tmp;
    }
    cout << ans << endl;

    return 0;
}
