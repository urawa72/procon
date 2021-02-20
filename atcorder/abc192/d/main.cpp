#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string x; cin >> x;
    ll m; cin >> m;

    int ma = 0;
    for(int i = 0; i < (int)x.size(); i++){
        ma = max((x[i]) - '0', ma);
    }

    return 0;
}
