#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;

int main() {
    int n; cin >> n;
    int m;
    map<string, int> list;
    rep(i, n){
        string s; cin >> s;
        if(list.count(s)){
            list[s] += 1;
        }else{
            list.insert(make_pair(s, 1));
        }
        m = max(m, list[s]);
    }
    for(auto l : list){
        if(l.second == m) OP(l.first);
    }
}
