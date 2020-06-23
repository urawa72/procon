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
    int n; cin >> n;
    V<int> l(n);
    for(int i = 0; i < n; i++) cin >> l[i];

    sort(ALL(l));
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            int r = lower_bound(ALL(l), l[i] + l[j]) - l.begin();
            int l = i + 1;
            ans += max(0,r - l);
        }
    }
    cout << ans << endl;

    return 0;
}
