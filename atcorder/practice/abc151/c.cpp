#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n, m; cin >> n >> m;
    int wa[n + 1];
    bool ac[n + 1];

    // あらかじめ配列で問題番号とac/waを管理する
    for(int i = 1; i <= n; i++){
        wa[i] = 0;
        ac[i] = false;
    }

    int acNum = 0;
    int waNum = 0;
    // O(n + m)
    while(m--){
        int p;
        string s;
        cin >> p >> s;
        if(ac[p]) continue;
        if(s == "AC"){
            ac[p] = true;
            acNum++;
            waNum += wa[p];
        }else{
            wa[p]++;
        }
    }
    cout << acNum << " " << waNum << endl;
}
