#include <bits/stdc++.h>
using namespace std;

#define V vector
#define P pair
typedef long long ll;

int main() {
    int n; cin >> n;
    bool zero = false;
    V<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0) zero = true;
    }


    bool flag = true;
    ll ans = a[0];
    for(int i = 1; i < n; i++){
        if(ans <= 1000000000000000000 / a[i]){
            ans *= a[i];
        }else{
            flag = false;
            break;
        }
    }

    if(zero){
        cout << 0 << endl;
    }else if(!flag){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

}
