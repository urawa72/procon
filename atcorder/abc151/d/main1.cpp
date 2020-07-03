#include <bits/stdc++.h>
#include <cstring>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

// グリッドBFSによる最短経路
int main() {
    int h, w; cin >> h >> w;
    V<string> b(h);
    for(int i = 0; i < h; i++) cin >> b[i];

    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(b[i][j] == '#') continue;
            queue<P<int, int> > que;
            que.push({i, j});
            V<V<int> > d(h, V<int>(w, -1));
            d[i][j] = 0;
            int ma = 0;
            while(!que.empty()){
                auto p = que.front();
                que.pop();
                int x = p.second;
                int y = p.first;
                for(int k = 0; k < 4; k++){
                    int nx = x + dx[k];
                    int ny = y + dy[k];
                    if(nx < 0 || w <= nx || ny < 0 || h <= ny) continue;
                    if(b[ny][nx] == '#') continue;
                    if(d[ny][nx] != -1) continue;
                    d[ny][nx] = d[y][x] + 1;
                    que.push({ny, nx});
                    ma = max(ma, d[ny][nx]);
                }
            }
            ans = max(ans, ma);
        }
    }
    cout << ans << endl;
}
