#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    int n, m; cin >> n >> m;
    V<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    V<P<int, int> > kabe;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s[i][j] == '#'){
                kabe.push_back({i, j});
            }
            if(s[i][j] == '.') cnt++;
        }
    }


    int ans = 0;
    for(auto k : kabe){
        int ky = k.first;
        int kx = k.second;

        int seen[n][m];
        memset(seen, 0, sizeof(seen));
        queue<P<int, int> > q;
        q.push({ky, kx});
        seen[ky][kx] = 1;

        while(!q.empty()){
            int y = q.front().first;
            int x = q.front().second;
            q.pop();

            for(int i = 0; i < 4; i++){
                int ny = y + dy[i];
                int nx = x + dx[i];
                if(nx < 0 || m <= nx || ny < 0 || n <= ny) continue;
                if(s[ny][nx] == '#') continue;
                if(seen[ny][nx]) continue;
                seen[ny][nx] = 1;
                q.push({ny, nx});
            }
        }
        int tmp = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(seen[i][j]) tmp++;
            }
        }
        if(tmp == cnt + 1) ans++;
    }

    cout << ans << endl;

    return 0;
}
