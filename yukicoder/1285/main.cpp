#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    V<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(ALL(a));

    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] + 1 == a[i + 1]){
            cnt++;
        }
    }

    if(0 < cnt) cout << 2 << endl;
    else cout << 1 << endl;


    return 0;
}
