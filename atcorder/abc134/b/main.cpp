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
    int n, d; cin >> n >> d;

    d = d * 2 + 1;

    cout << (n + d - 1) / d << endl;

    return 0;
}
