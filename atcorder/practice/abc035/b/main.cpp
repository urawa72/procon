#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    string s; cin >> s;
    int t; cin >> t;
    int n = s.size();

    map<char, int> m;
    for(int i = 0; i < n; i++){
        m[s[i]]++;
    }

    int x = m['R'] - m['L'];
    int y = m['U'] - m['D'];

    // マンハッタン距離
    x = abs(x);
    y = abs(y);
    int ans = x + y;

    if(t == 1){
        // 最大値
        // ?分足すだけ
        ans += m['?'];
    }else{
        // 最小値
        // ?の数がマンハッタン距離より大きい場合
        // 差が奇数なら1、偶数なら0
        if(ans < m['?']) ans = (ans - m['?']) & 1;
        // 小さければ引くだけ
        else ans -= m['?'];
    }
    cout << ans << endl;
}
