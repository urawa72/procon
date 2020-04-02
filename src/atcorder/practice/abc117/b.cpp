#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP1(i, 0, n)
#define REP1(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> L(n);
    rep(i, n) cin >> L[i];
    sort(all(L));
    int sum = 0;
    rep(i, n - 1) sum += L[i];
    if(L[n - 1] < sum) cout << "Yes" << endl;
    else cout << "No" << endl;
}
