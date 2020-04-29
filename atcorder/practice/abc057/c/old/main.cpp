#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    long n;
    cin >> n;

    int ans = to_string(n).length();
    // 
    for(long i = 1; i * i <= n; i++){
        if(n % i == 0){
            int a = to_string(i).length();
            int b = to_string(n / i).length();
            ans = min(ans, max(a, b));
        }
    }
    OP(ans);
}
