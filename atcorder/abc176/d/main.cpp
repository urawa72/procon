#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

const ll INF = 1LL << 60;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

int main() {
    ll h, w;
    cin >> h >> w;
    ll ch, cw;
    cin >> ch >> cw;
    ll dh, dw;
    cin >> dh >> dw;
    V<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    ch--, cw--, dh--, dw--;

    V<V<ll> > cnt(h, V<ll>(w, INF));
    queue<P<ll, ll> > q, visited;
    q.push({ch, cw});
    cnt[ch][cw] = 0;

    while (!q.empty() || !visited.empty()) {
        ll nowx = 0, nowy = 0;
        if (!q.empty()) {
            auto p = q.front();
            q.pop();
            nowy = p.first;
            nowx = p.second;
            visited.push({nowy, nowx});
            for (int i = 0; i < 4; i++) {
                ll ny = nowy + dy[i];
                ll nx = nowx + dx[i];
                if (ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
                if (s[ny][nx] == '#') continue;
                if (cnt[nowy][nowx] < cnt[ny][nx]) {
                    cnt[ny][nx] = cnt[nowy][nowx];
                    q.push({ny, nx});
                }
            }
        } else {
            auto p = visited.front();
            visited.pop();
            nowy = p.first;
            nowx = p.second;
            for (int i = -2; i <= 2; i++) {
                for (int j = -2; j <= 2; j++) {
                    ll ny = nowy + i;
                    ll nx = nowx + j;
                    if (ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
                    if (s[ny][nx] == '#') continue;
                    if (cnt[nowy][nowx] + 1 < cnt[ny][nx]) {
                        cnt[ny][nx] = cnt[nowy][nowx] + 1;
                        q.push({ny, nx});
                    }
                }
            }
        }
    }

    if (cnt[dh][dw] == INF)
        cout << -1 << endl;
    else
        cout << cnt[dh][dw] << endl;

    return 0;
}
