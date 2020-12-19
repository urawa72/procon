#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int h, w; cin >> h >> w;
    V<V<int> > v(h, V<int>(w));
    int mi = 101;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int a; cin >> a;
            v[i][j] = a;
            mi = min(v[i][j], mi);
        }
    }

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(mi < v[i][j]){
                ans += (v[i][j] - mi);
            }
        }
    }
    cout << ans << endl;

    return 0;
}
