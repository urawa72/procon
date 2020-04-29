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
    int n; cin >> n;
    map<string, int> m;
    char pre;
    bool flag = true;
    rep(i, n){
        string w; cin >> w;
        m[w]++;
        if(m[w] > 1 || (i != 0 && pre != w[0])) {
            flag = false;
            break;
        }
        pre = w[w.length() - 1];
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
