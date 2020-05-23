#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int H, W;
bool ans = false;
vector<string> field;
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
bool seen[510][510];

void dfs(int h, int w){
    // 通過済みにする
    seen[h][w] = true;
    for(int i = 0; i < 4; i++){
        int nh = h + dx[i];
        int nw = w + dy[i];
        // 場外に出たらスルー
        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        // 既に通ってたらスルー
        if(seen[nh][nw]) continue;
        // 壁だったらスルー
        if(field[nh][nw] == '#') continue;
        // 進む
        dfs(nh, nw);
    }
}

int main() {
    cin >> H >> W;
    field.resize(H);
    for(int i = 0; i < H; i++){
        cin >> field[i];
    }
    // sとgの座標を特定する
    int sh, sw, gh, gw;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(field[i][j] == 's') sh = i, sw = j;
            if(field[i][j] == 'g') gh = i, gw = j;
        }
    }
    // sから探索開始
    dfs(sh, sw);
    if(seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
