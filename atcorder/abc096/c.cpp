#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int h, w;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
vector<string> s;
bool seen[100][100];

void dfs(int y, int x){
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(nx < 0 || w <= nx || ny < 0 || h <= ny) continue;
        if(s[ny][nx] != '#') continue;
        if(seen[ny][nx]) continue;
        seen[y][x] = true;
        seen[ny][nx] = true;
        dfs(ny, nx);
    }
}

int main() {
    cin >> h >> w;
    s.resize(h);
    for(int i = 0; i < h; i++){
        cin >> s[i];
    }
    // dfsでなくても簡単に解ける
    int cnt = 0;
    memset(seen, 0, sizeof(seen));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#'){
                cnt++;
                dfs(i, j);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(seen[i][j]) ans++;
        }
    }
    if(cnt == ans) cout << "Yes"  << endl;
    else cout << "No" << endl;
}
