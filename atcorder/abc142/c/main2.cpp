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
    V<P<int, int> > a(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = make_pair(x, i);
    }

    sort(ALL(a));
    for(int i = 0; i < n; i++){
        if(i != n -1) cout << a[i].second + 1 << ' ';
        else cout << a[i].second + 1 << endl;
    }

    return 0;
}
