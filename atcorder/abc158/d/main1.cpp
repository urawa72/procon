#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    string s;
    int q;
    cin >> s >> q;

    bool flag = false;
    int t, f;
    string c;
    rep(i,q){
        cin >> t;
        if(t == 1){
            flag = !flag;
        }else{
            cin >> f >> c;
            // 直前で反転してたらf==2でも先頭に
            if((!flag && f == 1) || (flag && f == 2)){
                s.insert(0,c);
            // 直前で反転してたらf==1でも末尾に
            }else{
                s+=c;
            }
        }
    }
    if(flag) reverse(s.begin(),s.end());
    OP(s);
}
