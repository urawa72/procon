#include <iostream>
#include <vector>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int H, W;
vector<vector<int> > field;

void dfs(int h, int w){
    // 海にする＝通過したことにする
    field[h][w] = 0;

    // 8方向試す
    for(int dh = -1; dh <= 1; dh++){
        for(int dw = -1; dw <= 1; dw++){
            int nh = h + dh;
            int nw = w + dw;
            // 場外だったら
            if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
            // 0だったら（＝海または通過済）
            if(field[nh][nw] == 0) continue;
            dfs(nh, nw);
        }
    }
}

int main() {
    while(cin >> H >> W){
        if(H == 0 || W == 0) break;
        field.assign(H, vector<int>(W, 0));
        for(int h = 0; h < H; h++){
            for(int w = 0; w < W; w++){
                cin >> field[h][w];
            }
        }
        int cnt = 0;
        for(int h = 0; h < H; h++){
            for(int w = 0; w < W; w++){
                if(field[h][w] == 0) continue;
                dfs(h, w);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
