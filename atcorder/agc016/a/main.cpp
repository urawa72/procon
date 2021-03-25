#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;

    const auto same = [](string t){
        char ch = t[0];
        for(auto c : t){
            if(ch != c) return false;
        }
        return true;
    };

    const auto change = [](string t, char c){
        string u;
        for(int j = 0; j < (int)t.size() - 1; j++){
            if(t[j] == c || t[j + 1] == c) u += c;
            else u += t[j];
        }
        return u;
    };

    int ans = 101;
    for(int i = 0; i < 26; i++){
        string t = s;
        int cnt = 0;
        char c = char('a' + i);
        bool flag = true;
        while(!same(t)){
            cnt++;
            t = change(t, c);
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;


    return 0;
}
