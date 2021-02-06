#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, x; cin >> n >> x;
    V<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int c = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == x) {
            c++;
            continue;
        }else if(i != n - 1) cout << v[i] << " ";
        else cout << v[i] << endl;
    }
    if(c == n) cout << endl;

    return 0;
}
