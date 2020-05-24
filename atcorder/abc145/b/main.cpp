#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    string tmp = "";
    rep(i, n / 2){
        tmp += s[i];
    }

    if(s == tmp + tmp){
        OP("Yes");
    }else{
        OP("No");
    }
}
