#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REP2(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector<int> vec(n);

    rep(i, n){
        cin >> vec[i];
    }

    for(int i = n - 1; i > 0; i--){
        if(vec[i] >= vec[i - 1]) continue;
        else if(vec[i - 1] - 1 == vec[i]) vec[i - 1] -= 1;
        else {
            OP("No");
            return 0;
        }
    }
    OP("Yes");
}
