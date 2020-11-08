#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0, tmp = 0;
    for(int i = 2; i <= 1000; i++){
        int t = 0;
        for(int j = 0; j < n; j++){
            if(a[j] % i == 0) t++;
        }
        if(tmp <= t){
            tmp = t;
            ans = max(ans, i);
        }
    }
    cout << ans << endl;


    return 0;
}
