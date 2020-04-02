#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

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
    double BTC = 380000.0;
    int n; cin >> n;
    double sum = 0;
    rep(i, n){
        double m; cin >> m;
        string s; cin >> s;
        if(s == "JPY"){
            sum += m;
        }else{
            sum += m * BTC;
        }
    }
    cout << fixed << setprecision(5) << sum << endl;
}
