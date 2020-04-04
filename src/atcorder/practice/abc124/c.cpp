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
    string s; cin >> s;
    int cnt = 0;
    REP(i, 1, s.size()){
        if(s[i] != s[i - 1]){
            continue;
        }else{
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
            cnt++;
        }
    }
    cout << cnt << endl;
}
