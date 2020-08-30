#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    V<int> v(6);
    for(int i = 0; i < 6; i++) cin >> v[i];
    sort(ALL(v));
    cout << v[3] << endl;

    return 0;
}
