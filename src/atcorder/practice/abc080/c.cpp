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
    // string s; cin >> s;
    // int sum = 0;
    // for(int i = 0; i < s.size(); i++){
    //     sum += s[i] - '0';
    // }
    // if(stoi(s) % sum == 0) cout << "Yes" << endl;
    // else cout << "No" << endl;
    int n; cin >> n;
    int t = n, c = 0;
    while(t > 0){
        c += t % 10;
        t /= 10;
    }
    if(n % c == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

}
