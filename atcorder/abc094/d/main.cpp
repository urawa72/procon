#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;

int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(ALL(a));

    ll ans = a[n - 1];
    ll ite = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] < ans / 2) ite = i;
        else break;
    }

    if(abs(ans - a[ite] * 2) <= abs(ans - a[ite + 1] * 2)){
        cout << ans << " " << a[ite] << endl;
    }else{
        cout << ans << " " << a[ite + 1] << endl;
    }

}
