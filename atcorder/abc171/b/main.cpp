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
    int n, k; cin >> n >> k;
    V<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    sort(ALL(p));

    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += p[i];
    }
    cout << sum << endl;

    return 0;
}
