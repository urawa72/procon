#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

ll solve(ll a, ll b, ll c) {
    int aa = a % 10ll;
    if(aa == 0) return 0;

    V<V<int>> v(10);
    v[1] = {1, 1, 1, 1};
    v[2] = {6, 2, 4, 8};
    v[3] = {1, 3, 9, 7};
    v[4] = {6, 4, 6, 4};
    v[5] = {5, 5, 5, 5};
    v[6] = {6, 6, 6, 6};
    v[7] = {1, 7, 9, 3};
    v[8] = {6, 8, 4, 2};
    v[9] = {1, 9, 1, 9};

    if(b % 4 == 0) return v[aa][0];
    if(b % 4 == 1) return v[aa][1];
    if(b % 4 == 2) {
        if(c == 1) return v[aa][2];
        return v[aa][0];
    }
    if(c % 2 == 0) return v[aa][1];
    return v[aa][3];
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;

    cout << solve(a, b, c) << endl;


    return 0;
}
