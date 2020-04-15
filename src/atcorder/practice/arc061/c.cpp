#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    string s; cin >> s;
    int n = s.size();
    ll sum = 0;
    // bit全探索で+の位置を全通り試す
    for(int bit = 0; bit < (1 << (n - 1)); bit++){
        ll cur = 0;
        for(int i = 0; i < n; i++){
            // 今の数字を10倍して数字を加算
            cur = cur * 10 + (s[i] - '0');
            if(bit & (1 << i)){
                // 合計に加算しそれまでの数字を初期化
                sum += cur;
                cur = 0;
            }
        }
        // 最後の数字を加算
        sum += cur;
    }
    cout << sum << endl;
}
