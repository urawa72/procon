#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
map<int, int> mp;

int main() {
    string s; cin >> s;

    bool ans = false;

    // 長さが1または2の時
    if((int)s.size() == 1) {
        int num = s[0] - '0';
        if(num % 8 == 0) ans = true;
    }
    if((int)s.size() == 2) {
        int n1 = s[0] - '0';
        int n2 = s[1] - '0';
        if((n1 + n2 * 10) % 8 == 0) ans = true;
        if((n2 + n1 * 10) % 8 == 0) ans = true;
    }

    for(int i = 0; i < (int)s.size(); i++){
        int num = s[i] - '0';
        mp[num]++;
    }

    // 下三桁が8の倍数かを見れば良い
    for(int i = 112; i < 1000; i+=8){
        map<int, int> tmp = mp;
        string t = to_string(i);
        bool ok = true;
        for(auto u : t){
            int num = u - '0';
            if(tmp[num]) tmp[num]--;
            else{
                ok = false;
                break;
            }
        }
        if(ok){
            ans = true;
            break;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
