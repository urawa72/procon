#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

const int dx[] = {1, 0, -1, 1, -1, 0};
const int dy[] = {1, 1, 1, 0, 0, -1};

// グリッドBFS
int main() {
    int n, X, Y;
    cin >> n >> X >> Y;
    // -200〜200の座標範囲を0〜403で表す
    int k = 403;
    X += 201;
    Y += 201;
    V<string> grid(k, string(k, '.'));
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        a += 201;
        b += 201;
        grid[a][b] = '#';
    }

    int sx = 201, sy = 201;
    V<V<int>> dis(k, V<int>(k, -1));
    dis[sx][sy] = 0;

    queue<P<int, int>> q;
    q.push({sx, sy});
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (k <= ny || k <= nx || ny < 0 || nx < 0) continue;
            if (grid[nx][ny] == '#') continue;
            if (dis[nx][ny] != -1) continue;
            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << dis[X][Y] << endl;

    return 0;
}
