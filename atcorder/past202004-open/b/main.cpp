#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    string s; cin >> s;
    V<int> v(3);
    map<char, int> mp;
    for(int i = 0; i < (int)s.size(); i++){
        mp[s[i]]++;
    }

    char ans;
    if(mp['a'] < mp['b']){
        if(mp['b'] < mp['c']) ans = 'c';
        else ans = 'b';
    }else{
        if(mp['a'] < mp['c']) ans = 'c';
        else ans = 'a';
    }
    cout << ans << endl;

    return 0;
}
