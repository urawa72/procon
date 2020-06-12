#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    ll n, k; cin >> n >> k;

    ll r = n - k;
    ll l = k - 1;
    long double a = r * l * 6;
    long double b = (n - 1) * 3;
    long double sum = n * n * n;

    cout << setprecision(20) << (a + b + 1) / sum << endl;
}
