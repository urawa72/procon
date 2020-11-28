#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b; cin >> a >> b;
    if(max(a, b) * 2 <= 16) cout << "Yay!" << endl;
    else cout << ":(" << endl;

    return 0;
}
