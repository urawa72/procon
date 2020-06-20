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
    int a, b, c; cin >> a >> b >> c;
    if(c - (a - b) < 0) cout << 0 << endl;
    else cout << c - (a - b)  << endl;

    return 0;
}
