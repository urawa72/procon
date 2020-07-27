#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;

int main() {
    int h, w, k; cin >> h >> w >> k;
    V<string> s(h);
    for(int i = 0; i < h; i++) cin >> s[i];

    // 何番目の#かをマス目番号で保持
    V<V<int> > vec(h, V<int>(w, 0));
    int cnt = 1;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#'){
                vec[i][j] = cnt;
                cnt++;
            }
        }
    }

    // 1行ごとに
    // 左から右へ 左の番号を自身の番号にする
    // 右から左へ 右の番号を自身の番号にする
    for(int i = 0; i < h; i++){
        for(int j = 1; j < w; j++){
            if(vec[i][j] == 0 && vec[i][j - 1] != 0){
                vec[i][j] = vec[i][j - 1];
            }
        }
        for(int j = w - 2; j >= 0; j--){
            if(vec[i][j] == 0 && vec[i][j + 1] != 0){
                vec[i][j] = vec[i][j + 1];
            }
        }
    }

    // 1列ごとに
    // 上から下へ 上の番号を自身の番号にする
    // 下から上へ 下の番号を自身の番号にする
    for(int j = 0; j < w; j++){
        for(int i = 1; i < h; i++){
            if(vec[i][j] == 0 && vec[i - 1][j] != 0){
                vec[i][j] = vec[i - 1][j];
            }
        }
        for(int i = h - 2; i >= 0; i--){
            if(vec[i][j] == 0 && vec[i][j] == 0 && vec[i + 1][j] != 0){
                vec[i][j] = vec[i + 1][j];
            }
        }
    }

    // 上下左右の番号付けにより0はなくなるのでそのまま解答出力
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(j != w - 1) cout << vec[i][j] << ' ';
            else cout << vec[i][j];
        }
        cout << '\n';
    }


    return 0;
}
