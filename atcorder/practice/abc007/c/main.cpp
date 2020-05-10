#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;

// グリッド上の幅優先探索による最短経路
int main() {
    const int dx[] = {0, 0, 1, -1};
    const int dy[] = {1, -1, 0, 0};

    int r, c; cin >> r >> c;
    int sy, sx, gy, gx; cin >> sy >> sx >> gy >> gx;
    V<string> s(r + 1);
    for(int i = 1; i <= r; i++) cin >> s[i];

    // 距離を記録する
    int dis[c][r];
    memset(dis, -1, sizeof(dis));
    // 次にいくマスを入れる
    queue<P<int, int> > que;

    // 初期化
    dis[sx][sy] = 0;
    que.push({sx, sy});

    while(!que.empty()){
        auto p = que.front();
        que.pop();

        int x = p.first;
        int y = p.second;
        // 上下左右移動を試す
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            // 場外や#だったらダメ
            if(s[ny][nx - 1] == '#') continue;
            if(nx < 0 || c <= nx || ny < 0 || r <= ny) continue;
            // 既に通ってたらダメ
            if(dis[nx][ny] != -1) continue;
            // ゴールだったら距離を記録して終了
            if(nx == gx && ny == gy){
                dis[gx][gy] = dis[x][y] + 1;
                break;
            }
            // ゴールじゃなかったら距離を更新してキューに入れる
            dis[nx][ny] = dis[x][y] + 1;
            que.push({nx, ny});
        }
    }
    cout << dis[gx][gy] << endl;
}
