#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    int l1, l2, l3; cin >> l1 >> l2 >> l3;
    if(l1 != l2 && l1 != l3) cout << l1 << endl;
    else if(l2 != l1 && l2 != l3) cout << l2 << endl;
    else cout << l3 << endl;
}
