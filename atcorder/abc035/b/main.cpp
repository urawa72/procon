#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


int main() {
    string s; cin >> s;
    int t; cin >> t;

    V<int> cnt(5);
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == 'U') cnt[0]++;
        if(s[i] == 'D') cnt[1]++;
        if(s[i] == 'R') cnt[2]++;
        if(s[i] == 'L') cnt[3]++;
        if(s[i] == '?') cnt[4]++;
    }

    int y = abs(cnt[0] - cnt[1]);
    int x = abs(cnt[2] - cnt[3]);
    int z = x + y;

    if(t == 1){
        cout << z + cnt[4] << endl;
    }else{
        // 偶-奇=奇,偶-偶=偶,奇-奇=偶を利用して偶奇から0か1か求める
        // 偶奇が一致していたら0になる
        if(z < cnt[4]) z -= cnt[4], cout << (z & 1) << endl;
        else cout << z - cnt[4] << endl;
    }

    return 0;
}
