#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    map<int, int> ma;
    REP2(i, 1, n) ma[i] = 0;

    rep(i, n){
        int k; cin >> k;
        rep(j, k){
            int a; cin >> a;
            ma[a]++;
        }
    }

    for(int i = 0; i < Max; i++){
        Implement
    }
    int ans = 0;
    REP2(i, 1, m){
        if(ma[i] == n) ans++;
    }
    OP(ans);
}
