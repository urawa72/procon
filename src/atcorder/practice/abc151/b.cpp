#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    int sum = 0;
    rep(i, n - 1){
        int a;
        cin >> a;
        sum += a;
    }
    int last = n * m - sum;
    if(last <= 0){
        OP(0);
    }else if(last <= k){
        OP(last);
    }else{
        OP(-1);
    }
}
