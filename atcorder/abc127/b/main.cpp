#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int r, d, x; cin >> r >> d >> x;

    int pre = x;
    for(int i = 0; i < 10; i++){
        pre = r * pre - d;
        cout << pre << endl;
    }

    return 0;
}
