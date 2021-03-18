#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    V<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int cnt = 0;
            if(s[i][j] == '#') cnt++;
            for(int k = 0; k < 8; k++){
                int y = i + dy[k];
                int x = j + dx[k];
                if(x < 0 || m <= x || y < 0 || n <= y) continue;
                if(s[y][x] == '#') cnt++;
            }
            cout << cnt;
        }
        cout << '\n';
    }

    return 0;
}
