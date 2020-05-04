#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;

int main() {
    int n, m; cin >> n >> m;
    vector<ll> h(n + 1);
    for(int i = 1; i <= n; i++) cin >> h[i];
    vector<vector<int> > v(n + 1);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        bool flag = true;
        for(auto j : v[i]){
            if(h[j] < h[i]){
                continue;
            }else{
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;

}
