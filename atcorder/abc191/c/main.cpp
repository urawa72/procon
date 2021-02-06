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
    for(int i = 0; i < h - 1; i++){
        for(int j = 0; j < w - 1; j++){
            int cnt = 0;
            if(v[i][j] == '#') cnt++;
            if(v[i][j + 1] == '#') cnt++;
            if(v[i + 1][j] == '#') cnt++;
            if(v[i + 1][j + 1] == '#') cnt++;
            if(cnt == 1 || cnt == 3) ans++;
        }
    }
    cout << ans << endl;


    return 0;
}

