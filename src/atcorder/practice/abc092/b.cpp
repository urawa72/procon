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
    int n, d, x; cin >> n >> d >> x;
    int ans = x;
    rep(i, n){
        int a; cin >> a;
        int sum = 1;
        for(int i = 1; i < d; i++){
            int tmp = i * a + 1;
            if(tmp > d) break;
            sum++;
        }
        ans += sum;
    }
    cout << ans << endl;
}
