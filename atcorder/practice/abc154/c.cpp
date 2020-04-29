#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;

    bool flag = true;
    map<int, int> list;
    rep(i, n){
        int a; cin >> a;
        if(list.count(a)){
            OP("NO");
            flag = false;
            break;
        }else{
            list[a] += 1;
        }
    }
    if(flag) OP("YES");
}
