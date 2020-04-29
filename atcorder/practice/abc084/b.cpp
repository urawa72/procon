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
    int a, b; cin >> a >> b;
    string s; cin >> s;

    bool flag = true;
    if(s.size() == a + b + 1 && s[a] == '-'){
        for(int i = 0; i < a; i++){
            if(0 <= s[i] - '0' && s[i] - '0' <= 9) continue;
            flag = false;
        }
        for(int i = a + 1; i < a + b + 1; i++){
            if(0 <= s[i] - '0' && s[i] - '0' <= 9) continue;
            flag = false;
        }
    }else{
        flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
