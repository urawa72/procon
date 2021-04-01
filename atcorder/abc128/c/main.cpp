#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    V<V<int>> v(m);
    for(int i = 0; i < m; i++){
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int s; cin >> s;
            v[i].push_back(s - 1);
        }
    }
    V<int> p(m);
    for(int i = 0; i < m; i++) cin >> p[i];

    int ans = 0;
    for(int bit = 0; bit < 1 << n; bit++){
        int sum = 0;
        for(int i = 0; i < m; i++){
            int cnt = 0;
            for(auto s : v[i]){
                if(bit & 1 << s) cnt++;
            }
            if(cnt % 2 == p[i]) sum++;
        }
        if(sum == m) ans++;
    }

    cout << ans << endl;

    return 0;
}
