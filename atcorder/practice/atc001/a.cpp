#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

// 四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;
bool seen[510][510];

void dfs(int h, int w){
    // 探索済み=通過済にする
    seen[h][w] = true;

    for(int i = 0; i < 4; i++){
        // 上下左右の移動を全て試す
        int nh = h + dx[i];
        int nw = w + dy[i];
        // 場外アウトしたら
        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        // 壁だったら
        if(field[nh][nw] == '#') continue;
        // 移動先が既に探索済み=通過済みだったら
        if(seen[nh][nw]) continue;
        // 再帰
        dfs(nh, nw);
    }
}

int main() {
    cin >> H >> W;
    field.resize(H);
    for(int i = 0; i < H; i++) cin >> field[i];

    // sとgの位置を特定する
    int sh, sw, gh, gw;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(field[i][j] == 's') sh = i, sw = j;
            if(field[i][j] == 'g') gh = i, gw = j;
        }
    }

    memset(seen, 0, sizeof(seen));
    dfs(sh, sw);

    if(seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
