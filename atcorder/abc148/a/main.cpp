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
    int a, b; cin >> a >> b;
    if(a == 1 && b == 2) cout << 3 << endl;
    if(a == 1 && b == 3) cout << 2 << endl;
    if(a == 3 && b == 2) cout << 1 << endl;
    if(a == 2 && b == 1) cout << 3 << endl;
    if(a == 3 && b == 1) cout << 2 << endl;
    if(a == 2 && b == 3) cout << 1 << endl;

    return 0;
}
