#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

// see https://atcoder.jp/contests/abc184/editorial/152
double dp[101][101][101];
double f(int a, int b, int c){
    if(dp[a][b][c]) return dp[a][b][c];
    if(a == 100 || b == 100 || c == 100) return 0;
    double ans = 0;
    ans += (f(a + 1, b, c) + 1) * a / (a + b + c);
    ans += (f(a, b + 1, c) + 1) * b / (a + b + c);
    ans += (f(a, b, c + 1) + 1) * c / (a + b + c);
    dp[a][b][c] = ans;
    return ans;

}

int main() {
    double a, b, c; cin >> a >> b >> c;
    cout << setprecision(12) << f(a, b, c) << endl;

    return 0;
}
