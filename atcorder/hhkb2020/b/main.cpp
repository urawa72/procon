#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int h, w; cin >> h >> w;
    V<string> v(h);
    for(int i = 0; i < h; i++) cin >> v[i];

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(j < w - 1 && v[i][j] == '.' && v[i][j+1] == '.') ans++;
            if(i < h - 1 && v[i][j] == '.' && v[i+1][j] == '.') ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
