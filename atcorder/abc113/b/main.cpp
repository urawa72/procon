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
    int n, t, a; cin >> n >> t >> a;
    int ans;
    int s = 100000000;
    // 小数で計算しないで整数で計算する
    rep(i, n){
        int h; cin >> h;
        int x = (t * 1000 - h * 6) - a * 1000;
        if(x < 0) x = -x;
        if(x < s){
            s = x;
            ans = i + 1;
        }
    }
    cout << ans << endl;
}
