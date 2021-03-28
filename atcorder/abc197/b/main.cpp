#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int h, w, y, x; cin >> h >> w >> y >> x;
    V<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    x--;
    y--;

    int ans = 1;

    int nx = x, ny = y;
    // up
    while(1){
        ny -= 1;
        if(ny < 0 || h <= ny) break;
        if(s[ny][nx] == '#') break;
        ans++;
    }
    // down
    nx = x, ny = y;
    while(1){
        ny += 1;
        if(ny < 0 || h <= ny) break;
        if(s[ny][nx] == '#') break;
        ans++;
    }
    // right
    nx = x, ny = y;
    while(1){
        nx += 1;
        if(nx < 0 || w <= nx) break;
        if(s[ny][nx] == '#') break;
        ans++;
    }
    // left
    nx = x, ny = y;
    while(1){
        nx -= 1;
        if(nx < 0 || w <= nx) break;
        if(s[ny][nx] == '#') break;
        ans++;
    }
    cout << ans << endl;

    return 0;
}
