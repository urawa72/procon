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

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

int main() {
    int h, w; cin >> h >> w;
    V<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];


    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#') continue;

            int dis[h + 1][w + 1];
            memset(dis, -1, sizeof(dis));
            dis[i][j] = 0;
            queue<P<int, int> > que;
            que.push({i, j});

            while(!que.empty()){
                auto p = que.front();
                que.pop();

                int y = p.first;
                int x = p.second;
                for(int i = 0; i < 4; i++){
                    int ny = y + dy[i];
                    int nx = x + dx[i];
                    if(ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
                    if(s[ny][nx] == '#') continue;
                    if(dis[ny][nx] != -1) continue;
                    dis[ny][nx] = dis[y][x] + 1;
                    ans = max(dis[ny][nx], ans);
                    que.push({ny, nx});
                }
            }
        }
    }
    cout << ans << endl;


    return 0;
}
