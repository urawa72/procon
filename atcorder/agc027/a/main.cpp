#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, x; cin >> n >> x;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(ALL(a));

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(i < n - 1 && 0 <= x - a[i]){
            x -= a[i];
            ans++;
        }else{
            if(x == a[i]) ans++;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
