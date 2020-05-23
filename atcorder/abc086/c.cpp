#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> t(n + 1);
    vector<pair<int, int> > p(n + 1);
    t[0] = 0;
    p[0] = make_pair(0, 0);
    for(int i = 1; i < n + 1; i++){
        cin >> t[i];
        int x, y; cin >> x >> y;
        p[i] = make_pair(x, y);
    }

    bool flag = true;
    for(int i = 1; i < n + 1; i++){
        int tmp = t[i] - t[i - 1];
        int nx = abs(p[i].first - p[i - 1].first);
        int ny = abs(p[i].second - p[i - 1].second);
        if(tmp < nx || tmp < ny) {
            flag = false;
            break;
        }
        if(tmp % 2 != 0 && (nx + ny) % 2 != 0) continue;
        if(tmp % 2 == 0 && (nx + ny) % 2 == 0) continue;
        flag = false;
        break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
