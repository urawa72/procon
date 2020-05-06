#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
#define M map
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

V<V<int> > v;

// 自分の解答（冗長）
// int dfs(V<int> &w){
//     if(w.size() == 0) return 1;
//     V<int> tmp;
//     for(auto next : w){
//         int res = dfs(v[next]);
//         tmp.push_back(res);
//     }
//     int mi = INT_INF, ma = 0;
//     for(int i = 0; i < tmp.size(); i++){
//         mi = min(mi, tmp[i]);
//         ma = max(ma, tmp[i]);
//     }
//     return mi + ma + 1;
// }

// 解答例
int dfs(int i){
    if(v[i].size() == 0) return 1;
    int mi = INT_INF, ma = 0;
    for(auto j : v[i]){
        int p = dfs(j);
        mi = min(mi, p);
        ma = max(ma, p);
    }
    return mi + ma + 1;
}

int main() {
    int n; cin >> n;
    v.resize(n + 1);
    for(int i = 2; i < n + 1; i++){
        int b; cin >> b;
        v[b].push_back(i);
    }

    // 自分の解答（冗長）
    // int ans = dfs(v[1]);
    // 解答例
    int ans = dfs(1);
    cout << ans << endl;

}
