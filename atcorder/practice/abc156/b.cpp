#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, k;
    cin >> n >> k;

    // 10進数->n進数変換は対象をnで割った余りからわかる
    // 何回割ったかで桁数がわかる
    int cnt = 0;
    while(0 < n){
        n = n / k;
        cnt++;
    }
    OP(cnt);
}
