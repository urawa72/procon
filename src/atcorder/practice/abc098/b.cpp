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
    string s; cin >> s;
    int ans = 0;
    for(int i = 1; i < n; i++){
        int cnt = 0;
        for(char c = 'a'; c <= 'z'; c++){
            bool r = false, l = false;
            for(int j = 0; j < i; j++){
                if(s[j] == c) r = true;
            }
            for(int j = i; j < n; j++){
                if(s[j] == c) l = true;
            }
            if(r && l) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
