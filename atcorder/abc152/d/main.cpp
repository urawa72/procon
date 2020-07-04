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

typedef P<int, int> pint;
pint f(int x){
    int a = x % 10;
    int b = 0;
    while(x){
        b = x;
        x /= 10;
    }
    return pint(a, b);
}

int main() {
    int n; cin >> n;
    map<pint, int> m;
    for(int i = 1; i <= n; i++){
        pint p = f(i);
        m[p]++;
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        pint p = f(i);
        pint q(p.second, p.first);
        ans += m[q];
    }
    cout << ans << endl;


    return 0;
}
