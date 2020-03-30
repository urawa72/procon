#include <bits/stdc++.h>
#include <queue>
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
    int n; cin >> n;
    map<int, int> m;
    rep(i, n){
        int a; cin >> a;
        m[a]++;
    }

    int key, val = 0;
    for(auto p : m){
        if(val < p.second){
            key = p.first;
            val = p.second;
        }
    }
    cout << key << " " << val << endl;
}
