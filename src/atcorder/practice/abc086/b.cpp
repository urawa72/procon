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
    string a, b; cin >> a >> b;
    string c = a + b;
    int d = stoi(c);
    for(int i = 1; i * i <= d; i++){
        if(i * i == d){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    // double e = sqrt(d);
    // if(floor(e) == e) cout << "Yes" << endl;
    // else cout << "No" << endl;
}
