#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;

int main() {
    int H, W; cin >> H >> W;
    V<string> s(H);
    for(int i = 0; i < H; i++) cin >> s[i];

    // 8方向の添字配列
    int dx[] = {1, 0, -1, 0, -1, 1, -1, 1};
    int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};

    V<V<int> > ans(H, V<int>(W, 0));
    int cnt1 = 0, cnt2 = 0;
    for(int h = 0; h < H; h++){
        for(int w = 0; w < W; w++){
            if(s[h][w] == '#'){
                cnt1++; // #の総数をカウント
                int sum = 1; // 調査範囲の#の数
                bool flag = true;
                for(int i = 0; i < 8; i++){
                    int nx = w + dx[i];
                    int ny = h + dy[i];
                    // はみでたらダメ
                    if(nx < 0 || W <= nx || ny < 0 || H <= ny) continue;
                    if(s[ny][nx] != '#'){
                        flag = false;
                        break;
                    }
                    sum++;
                }
                if(flag){
                    ans[h][w] = 1;
                    cnt2 += sum;
                }
            }
        }
    }

    // 調査範囲の#の数が総数以上ならpossible
    if(cnt1 <= cnt2){
        cout << "possible" << endl;
        for(int h = 0; h < H; h++){
            for(int w = 0; w < W; w++){
                if(ans[h][w]) cout << '#';
                else cout << '.';
            }
            cout << "\n";
        }
    }else{
        cout << "impossible" << endl;
    }

}
