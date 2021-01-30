#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    V<P<int, int> > v(m);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        v[i] = make_pair(a, b);
    }

    int k; cin >> k;
    V<P<int, int> > w(k);
    for(int i = 0; i < k; i++){
        int c, d; cin >> c >> d;
        w[i] = make_pair(c, d);
    }

    int ans = 0;
    for(int bit = 0; bit < (1 << k); bit++){
        map<int, int> mp;
        for(int i = 0; i < k; i++){
            if(bit & (1 << i)){
                mp[w[i].first]++;
            }else{
                mp[w[i].second]++;
            }
        }
        int tmp = 0;
        for(int i = 0; i < m; i++){
            if(mp[v[i].first] && mp[v[i].second]){
                tmp++;
            }
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;

    return 0;
}
