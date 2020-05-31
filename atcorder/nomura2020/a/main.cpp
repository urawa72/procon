#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int h1, m1, h2, m2, k; cin >> h1 >> m1 >> h2 >> m2 >> k;
    int a = h2 - h1;
    int b = m2 - m1;
    int c = a * 60;
    cout << b + c - k << endl;
}
