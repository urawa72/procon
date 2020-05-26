#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> vec;
    rep(i, n){
        int h; cin >> h;
        vec.push_back(h);
    }

    int ans = 0;
    int tmp = 0;
    rep(i, n - 1){
        if(vec[i] >= vec[i + 1]){
            tmp++;
            ans = max(ans, tmp);
        }else{
            tmp = 0;
        }
    }
    OP(ans);
}
