#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    V<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    for(int w = 0; w < 9; w++){
        for(int h = 0; h < n; h++){
            if(v[h][w] == 'x') ans++;
            if(v[h][w] == 'o'){
                while(h < n){
                    if(h == n) break;
                    if(v[h][w] != 'o') break;
                    h++;
                }
                h--;
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
