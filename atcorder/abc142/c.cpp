#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<pair<int, int> > vec;
    REP2(i, 1, n){
        int a; cin >> a;
        vec.push_back(make_pair(a, i));
    }
    // pairのfirstでソート＝生徒の存在数順
    sort(vec.begin(), vec.end());

    // sort済みvecのsecondが出席番号
    rep(i, n){
        if(i == n - 1){
            cout << vec[i].second;
        }else{
            cout << vec[i].second << " ";
        }
    }
    cout << endl;
}
