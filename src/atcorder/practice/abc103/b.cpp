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
    string s, t; cin >> s >> t;
    // int len = s.size();
    bool flag = false;
    rep(i, s.size()){
        if(s == t){
            flag = true;
            break;
        }
        // 文字列を1文字ずつ後ろにずらす
        // char tmp = s[len - 1];
        // for(int j = len; j >= 0; j--){
        //     s[j + 1] = s[j];
        // }
        // s[0] = tmp;

        // もっと簡単にできる
        s = s.back() + s.substr(0, s.size() - 1);
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
