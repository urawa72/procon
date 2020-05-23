#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, m; cin >> n >> m;
    V<V<int> > v(n + 1);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        int sum = 0;
        // チェックしたかメモしておく
        V<bool> memo(n + 1, false);
        // 自分もメモ
        memo[i] = true;
        for(int j = 0; j < v[i].size(); j++){
            // 友達はカウントしないためメモしておく
            memo[v[i][j]] = true;
        }
        for(int j = 0; j < v[i].size(); j++){
            // 友達の友達を1人ずつチェック
            for(int k = 0; k < v[v[i][j]].size(); k++){
                // 友達の友達をメモしてなかったらカウントしメモ
                if(!memo[v[v[i][j]][k]]){
                    sum++;
                    memo[v[v[i][j]][k]] = true;
                }
            }
        }
        cout << sum << endl;
    }

}
