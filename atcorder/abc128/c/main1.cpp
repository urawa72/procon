#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REPE(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int> > v(m);
    rep(i, m){
        int k; cin >> k;
        v[i].resize(k);
        rep(j, k){
            cin >> v[i][j];
            v[i][j]--;
        }
    }
    vector<int> p(m);
    rep(i, m) cin >> p[i];

    int ans = 0;
    // ビット全探索でスイッチon/offの組み合わせを全て試す
    for(int bit = 0; bit < (1 << n); bit++){
        bool flag = true;
        for(int j = 0; j < m; j++){
            int cnt = 0;
            for(int k : v[j]){
                // スイッチon/off組み合わせビット列とスイッチonのビット列とのand演算
                if(bit & (1 << k)) {
                    cnt++;
                }
            }
            cnt %= 2;
            if(cnt != p[j]){
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}
