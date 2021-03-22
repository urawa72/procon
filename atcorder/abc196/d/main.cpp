#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int H, W, A, B;
bool used[16][16];

// 半畳は考えなくて良い
// 1畳の縦置き,横置き,置かないを深さ優先探索で全て試す
int dfs(int x, int y, int a){
    // 最後まで探索してA枚使い切っていれば+1
    if(H == y) return a == 0;

    // 右端までいったら一行下がる
    if(W == x) return dfs(0, y + 1, a);

    // 既に置かれていたら1列進む
    if(used[y][x]) return dfs(x + 1, y, a);

    int res = 0;

    // 縦置き
    if(y + 1 < H && !used[y + 1][x] && 0 < a){
        used[y][x] = used[y + 1][x] = true;
        res += dfs(x + 1, y, a - 1);
        used[y][x] = used[y + 1][x] = false;
    }

    // 横置き
    if(x + 1 < W && !used[y][x + 1] && 0 < a){
        used[y][x] = used[y][x + 1] = true;
        res += dfs(x + 1, y, a - 1);
        used[y][x] = used[y][x + 1] = false;
    }

    // 何も置かない
    res += dfs(x + 1, y, a);

    return res;
}

int main() {
    cin >> H >> W >> A >> B;
    cout << dfs(0, 0, A) << endl;

    return 0;
}
