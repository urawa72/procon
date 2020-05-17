#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

using Graph = V<V<int>>;
int n, m, k;
int id = 0;
V<int> seen;

// 連結成分を求めるDFS
void dfs(const Graph &g, int v, int &cnt){
    seen[v] = id;
    cnt++;
    for(auto next_v : g[v]){
        if(seen[next_v] != -1) continue;
        dfs(g, next_v, cnt);
    }
}

int main() {
    cin >> n >> m >> k;

    Graph g(n);
    V<int> a(m), b(m);
    for(int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    V<int> c(k), d(k);
    for(int i = 0; i < k; i++){
        cin >> c[i] >> d[i];
        c[i]--;
        d[i]--;
    }

    // どの連結成分に含まれているかidで管理する
    seen.assign(n, -1);
    V<int> nums;
    for(int i = 0; i < n; i++){
        if(seen[i] == -1){
            int cnt = 0;
            dfs(g, i, cnt);
            nums.push_back(cnt);
            id++;
        }
    }

    // 連結成分数から自身と自身の友達を引く
    V<int> ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = nums[seen[i]] - 1 - (int)g[i].size();
    }

    // 同じ連結成分内のブロック関係は引く
    for(int i = 0; i < k; i++){
        if(seen[c[i]] == seen[d[i]]){
            ans[c[i]]--;
            ans[d[i]]--;
        }
    }

    for(int i = 0; i < (int)ans.size(); i++){
        cout << ans[i];
        if(i != (int)ans.size() - 1) cout << " ";
    }
    cout << endl;

}
