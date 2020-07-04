#include <bits/stdc++.h>
#include <numeric>
#include <type_traits>
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
    int h, n; cin >> h >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        sum += a;
    }

    if(h <= sum) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
