#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    string s; cin >> s;
    int t; cin >> t;
    int x = 0, y = 0, cnt = 0;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == 'L') x--;
        if(s[i] == 'R') x++;
        if(s[i] == 'U') y++;
        if(s[i] == 'D') y--;
        if(s[i] == '?') cnt++;
    }

    int sum = abs(x) + abs(y);
    if(t == 1){
        cout << sum + cnt << endl;
    }else{
        if(sum < cnt) sum = (sum - cnt) & 1, cout << sum << endl;
        else cout << sum - cnt << endl;
    }

}
