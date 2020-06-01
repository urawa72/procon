#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

int main() {
    ll a; cin >> a;
    string b; cin >> b;
    ll bb = (b[0] - '0') * 100 + (b[2] - '0') * 10 + (b[3] - '0');
    cout << a * bb / 100 << endl;

}
