#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int n, m; cin >> n >> m;
    V<V<int> > v(m);
    for(int i = 0; i < m; i++){
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int s; cin >> s;
            s--;
            v[i].push_back(s);
        }
    }
    V<int> p(m);
    for(int i = 0; i < m; i++) cin >> p[i];

    int ans = 0;
    for(int bit = 0; bit < (1 << n); bit++){
        bool flag = true;
        for(int i = 0; i < m; i++){
            int cnt = 0;
            for(int k : v[i]){
                if(bit & (1 << k)) cnt++;
            }
            cnt %= 2;
            if(cnt != p[i]){
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;

    return 0;
}
