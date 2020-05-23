#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REPE(i, x, n) for (int i = x; i <= n; i++)
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;

    vector<int> t(s.size());
    t[0] = 0;
    for(int i = 1; i < s.size(); i++){
        t[i] = t[i - 1];
        if(s[i - 1] == 'A' && s[i] == 'C'){
            t[i]++;
        }
    }

    for(int i = 0; i < q; i++){
        int l, r; cin >> l >> r;
        int cnt = t[r - 1] - t[l - 1];
        if(cnt > 0) cout << cnt << endl;
        else cout << 0 << endl;
    }
}
