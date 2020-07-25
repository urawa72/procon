#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD =  1000000007;
const ll INF = 1LL << 60;


int main() {
    int x; cin >> x;

    int ans = 8;
    for(int i = 600; i <= 2000; i+=200){
        if(x < i){
            cout << ans << endl;
            return 0;
        }else{
            ans--;
        }

    }

    return 0;
}
