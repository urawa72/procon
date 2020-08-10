#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int h, w; cin >> h >> w;
    V<string> v(h);
    for(int i = 0; i < h; i++) cin >> v[i];

    // 全ての#の数
    int sum = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(v[i][j] == '#') sum++;
        }
    }

    // 右・下のみの移動で#を数える
    int now = 0, cnt = 0;
    for(int i = 0; i < h; i++){
        if(v[i][now] == '.') break;
        for(int j = now; j < w; j++){
            if(v[i][j] == '#'){
                now = j;
                cnt++;
            }
            else break;
        }
    }

    // 全ての#を訪れていなければダメ
    if(sum == cnt) cout << "Possible" << endl;
    else cout << "Impossible" << endl;

    return 0;
}
