#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int H, W; cin >> H >> W;
    vector<string> s(H);
    for(int i = 0; i < H; i++){
        cin >> s[i];
    }
    // 8方向の添字配列
    int dx[] = {1, 0, -1, 0, -1, 1, -1, 1};
    int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
    for(int h = 0; h < H; h++){
        for(int w = 0; w < W; w++){
            if(s[h][w] != '#'){
                int cnt = 0;
                for(int i = 0; i < 8; i++){
                    int nx = w + dx[i];
                    int ny = h + dy[i];
                    // はみでたらダメ
                    if(nx < 0 || W <= nx || ny < 0 || H <= ny) continue;
                    if(s[ny][nx] == '#') cnt++;
                }
                // charに変換して上書き
                s[h][w] = char(cnt + '0');
            }
        }
    }
    for(int i = 0; i < H; i++){
        cout << s[i] << endl;
    }
}
