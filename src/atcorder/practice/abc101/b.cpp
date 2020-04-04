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
    // string n; cin >> n;
    // int in = stoi(n);
    // int s = 0;
    // rep(i, n.size()){
    //     s += n[i] - '0';
    // }
    int in; cin >> in;
    int s = 0;
    int tmp = in;

    while(tmp > 0){
        s += tmp % 10;
        tmp /= 10;
    }
    if(in % s == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
