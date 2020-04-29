#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    long n, a, b;
    cin >> n >> a >> b;

    long ans = 0;
    long d = n/(a+b);
    ans = d*a;
    long s = n%(a+b);
    if(a <= s){
        ans += a;
    }else{
        ans += n-d*(a+b);
    }
    OP(ans);
}
