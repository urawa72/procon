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
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int xd = x2 - x1;
    int yd = y2 - y1;
    int x3 = x2 - yd;
    int y3 = y2 + xd;
    int x4 = x1 - yd;
    int y4 = y1 + xd;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}
