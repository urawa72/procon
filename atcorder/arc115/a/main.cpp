#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n, m; cin >> n >> m;
    V<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    // 000011と111100はどんな答えの組み合わせでも正解数は等しくなる
    // 000001と111100は正解数が等しくなることはない
    // 1の数が奇数個と偶数個の積
    // 1の数の偶奇が異なれば正解数は異なる
    ll odd = 0, even = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(s[i][j] - '0' == 1) cnt++;
        }
        if(cnt % 2 == 0) even++;
        else odd++;
    }

    ll ans = odd * even;
    cout << ans << endl;


    return 0;
}
