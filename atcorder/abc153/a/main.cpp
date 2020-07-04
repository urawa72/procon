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
    int h, a; cin >> h >> a;
    if(h % a == 0) cout << h / a << endl;
    else cout << h / a + 1 << endl;

    return 0;
}
