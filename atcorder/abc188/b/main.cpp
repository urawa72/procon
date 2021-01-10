#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += (a[i] * b[i]);
    }
    if(sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
