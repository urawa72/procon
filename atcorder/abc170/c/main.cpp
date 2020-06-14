#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int x, n; cin >> x >> n;
    V<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    int i = 0, ans = IINF;
    while(1){
        int a = x + i;
        bool f1 = true;
        for(int j = 0; j < n; j++){
            if(a == p[j]){
                f1 = false;
                break;
            }
        }
        if(f1) ans = a;
        int b = x - i;
        bool f2 = true;
        for(int j = 0; j < n; j++){
            if(b == p[j]){
                f2 = false;
                break;
            }
        }
        if(f2){
            ans = min(ans, b);
        }
        if(ans != IINF) break;
        i++;
    }
    cout << ans << endl;

    return 0;
}
