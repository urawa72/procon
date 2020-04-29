#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int> > v(n + 1, vector<int>());
    map<int, int> x;
    // aが1のbを連想配列で管理
    // bがnの場合は配列でaを管理
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        if(a == 1) x[b] = 1;
        if(b == n) v[n].push_back(a);
    }
    bool flag = false;
    // v[n]の各aについて連想配列で1が存在するか確認
    for(auto i : v[n]){
        if(x[i] == 1){
            flag = true;
            break;
        }
    }
    if(flag) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
}
