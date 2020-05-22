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
    int s; cin >> s;
    vector<int> v(1000000);
    v[s] = 1;
    bool flag = true;
    int cnt = 1;
    while(flag){
        if(s % 2 == 0){
            s = s / 2;
            v[s]++;
        }else{
            s = 3 * s + 1;
            v[s]++;
        }
        cnt++;
        if(v[s] == 2) break;
    }
    cout << cnt << endl;
}
